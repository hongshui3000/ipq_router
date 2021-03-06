// Copyright (c) 2013 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _RX_MSDU_START_H_
#define _RX_MSDU_START_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	msdu_length[13:0], ip_offset[19:14], ring_mask[23:20], tcp_udp_offset[30:24], reserved_0c[31]
//	1	flow_id_crc[31:0]
//	2	msdu_number[7:0], decap_format[9:8], ipv4_proto[10], ipv6_proto[11], tcp_proto[12], udp_proto[13], ip_frag[14], tcp_only_ack[15], sa_idx[26:16], reserved_2b[31:27]
//	3	da_idx[10:0], da_is_bcast_mcast[11], reserved_3a[15:12], ip4_protocol_ip6_next_header[23:16], reserved_3b[31:24]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_RX_MSDU_START 4

struct rx_msdu_start {
    volatile uint32_t msdu_length                     : 14, //[13:0]
                      ip_offset                       :  6, //[19:14]
                      ring_mask                       :  4, //[23:20]
                      tcp_udp_offset                  :  7, //[30:24]
                      reserved_0c                     :  1; //[31]
    volatile uint32_t flow_id_crc                     : 32; //[31:0]
    volatile uint32_t msdu_number                     :  8, //[7:0]
                      decap_format                    :  2, //[9:8]
                      ipv4_proto                      :  1, //[10]
                      ipv6_proto                      :  1, //[11]
                      tcp_proto                       :  1, //[12]
                      udp_proto                       :  1, //[13]
                      ip_frag                         :  1, //[14]
                      tcp_only_ack                    :  1, //[15]
                      sa_idx                          : 11, //[26:16]
                      reserved_2b                     :  5; //[31:27]
    volatile uint32_t da_idx                          : 11, //[10:0]
                      da_is_bcast_mcast               :  1, //[11]
                      reserved_3a                     :  4, //[15:12]
                      ip4_protocol_ip6_next_header    :  8, //[23:16]
                      reserved_3b                     :  8; //[31:24]
};

/*

msdu_length
			
			MSDU length in bytes after decapsulation.  This field is
			still valid for MPDU frames without A-MSDU.  It still
			represents MSDU length after decapsulation

ip_offset
			
			Indicates the IP offset in bytes from the start of the
			packet after decapsulation.  Only valid if ipv4_proto or
			ipv6_proto is set.

ring_mask
			
			Indicates the destination RX rings for this MSDU.

tcp_udp_offset
			
			Indicates the offset in bytes to the start of TCP or UDP
			header from the start of the IP header after decapsulation. 
			Only valid if tcp_prot or udp_prot is set.  The value 0
			indicates that the offset is longer than 127 bytes.

reserved_0c
			
			Reserved: HW should fill with zero.  FW should ignore.

flow_id_crc
			
			TCP flow identification: TCP flowID is a 32 bit CRC done
			on the TCP 4-tuple  <SRC IP, DST IP, SRC port, DST port>

msdu_number
			
			Indicates the MSDU number within a MPDU.  This value is
			reset to zero at the start of each MPDU.  If the number of
			MSDU exceeds 255 this number will wrap using modulo 256.

decap_format
			
			Indicates the format after decapsulation:
			
			
			
			<enum 0 RAW> No encapsulation
			
			<enum 1 Native_WiFi>
			
			<enum 2 Ethernet> Ethernet 2 (DIX)  
			
			<enum 3 802_3> 802.3 (uses SNAP/LLC)
			
			<legal all>

ipv4_proto
			
			Set if L2 layer indicates IPv4 protocol.

ipv6_proto
			
			Set if L2 layer indicates IPv6 protocol.

tcp_proto
			
			Set if the ipv4_proto or ipv6_proto are set and the IP
			protocol indicates TCP.

udp_proto
			
			Set if the ipv4_proto or ipv6_proto are set and the IP
			protocol indicates UDP.

ip_frag
			
			Indicates that either the IP More frag bit is set or IP
			frag number is non-zero.  If set indicates that this is a
			fragmented IP packet.

tcp_only_ack
			
			Set if only the TCP Ack bit is set in the TCP flags and
			if the TCP payload is 0.

sa_idx
			
			The offset in the address table which matches the MAC
			source address.

reserved_2b
			
			Reserved: HW should fill with zero.  FW should ignore.

da_idx
			
			The offset in the address table which matches the MAC
			source address

da_is_bcast_mcast
			
			The destination address is broadcast or multicast.

reserved_3a
			
			Reserved: HW should fill with zero.  FW should ignore.

ip4_protocol_ip6_next_header
			
			For IPv4 this is the 8 bit protocol field (when
			ipv4_proto is set).  For IPv6 this is the 8 bit next_header
			field (when ipv6_proto is set).

reserved_3b
			
			Reserved: HW should fill with zero.  FW should ignore.
*/


/* Description		RX_MSDU_START_0_MSDU_LENGTH
			
			MSDU length in bytes after decapsulation.  This field is
			still valid for MPDU frames without A-MSDU.  It still
			represents MSDU length after decapsulation
*/
#define RX_MSDU_START_0_MSDU_LENGTH_OFFSET                           0x00000000
#define RX_MSDU_START_0_MSDU_LENGTH_LSB                              0
#define RX_MSDU_START_0_MSDU_LENGTH_MASK                             0x00003fff

/* Description		RX_MSDU_START_0_IP_OFFSET
			
			Indicates the IP offset in bytes from the start of the
			packet after decapsulation.  Only valid if ipv4_proto or
			ipv6_proto is set.
*/
#define RX_MSDU_START_0_IP_OFFSET_OFFSET                             0x00000000
#define RX_MSDU_START_0_IP_OFFSET_LSB                                14
#define RX_MSDU_START_0_IP_OFFSET_MASK                               0x000fc000

/* Description		RX_MSDU_START_0_RING_MASK
			
			Indicates the destination RX rings for this MSDU.
*/
#define RX_MSDU_START_0_RING_MASK_OFFSET                             0x00000000
#define RX_MSDU_START_0_RING_MASK_LSB                                20
#define RX_MSDU_START_0_RING_MASK_MASK                               0x00f00000

/* Description		RX_MSDU_START_0_TCP_UDP_OFFSET
			
			Indicates the offset in bytes to the start of TCP or UDP
			header from the start of the IP header after decapsulation. 
			Only valid if tcp_prot or udp_prot is set.  The value 0
			indicates that the offset is longer than 127 bytes.
*/
#define RX_MSDU_START_0_TCP_UDP_OFFSET_OFFSET                        0x00000000
#define RX_MSDU_START_0_TCP_UDP_OFFSET_LSB                           24
#define RX_MSDU_START_0_TCP_UDP_OFFSET_MASK                          0x7f000000

/* Description		RX_MSDU_START_0_RESERVED_0C
			
			Reserved: HW should fill with zero.  FW should ignore.
*/
#define RX_MSDU_START_0_RESERVED_0C_OFFSET                           0x00000000
#define RX_MSDU_START_0_RESERVED_0C_LSB                              31
#define RX_MSDU_START_0_RESERVED_0C_MASK                             0x80000000

/* Description		RX_MSDU_START_1_FLOW_ID_CRC
			
			TCP flow identification: TCP flowID is a 32 bit CRC done
			on the TCP 4-tuple  <SRC IP, DST IP, SRC port, DST port>
*/
#define RX_MSDU_START_1_FLOW_ID_CRC_OFFSET                           0x00000004
#define RX_MSDU_START_1_FLOW_ID_CRC_LSB                              0
#define RX_MSDU_START_1_FLOW_ID_CRC_MASK                             0xffffffff

/* Description		RX_MSDU_START_2_MSDU_NUMBER
			
			Indicates the MSDU number within a MPDU.  This value is
			reset to zero at the start of each MPDU.  If the number of
			MSDU exceeds 255 this number will wrap using modulo 256.
*/
#define RX_MSDU_START_2_MSDU_NUMBER_OFFSET                           0x00000008
#define RX_MSDU_START_2_MSDU_NUMBER_LSB                              0
#define RX_MSDU_START_2_MSDU_NUMBER_MASK                             0x000000ff

/* Description		RX_MSDU_START_2_DECAP_FORMAT
			
			Indicates the format after decapsulation:
			
			
			
			<enum 0 RAW> No encapsulation
			
			<enum 1 Native_WiFi>
			
			<enum 2 Ethernet> Ethernet 2 (DIX)  
			
			<enum 3 802_3> 802.3 (uses SNAP/LLC)
			
			<legal all>
*/
#define RX_MSDU_START_2_DECAP_FORMAT_OFFSET                          0x00000008
#define RX_MSDU_START_2_DECAP_FORMAT_LSB                             8
#define RX_MSDU_START_2_DECAP_FORMAT_MASK                            0x00000300

/* Description		RX_MSDU_START_2_IPV4_PROTO
			
			Set if L2 layer indicates IPv4 protocol.
*/
#define RX_MSDU_START_2_IPV4_PROTO_OFFSET                            0x00000008
#define RX_MSDU_START_2_IPV4_PROTO_LSB                               10
#define RX_MSDU_START_2_IPV4_PROTO_MASK                              0x00000400

/* Description		RX_MSDU_START_2_IPV6_PROTO
			
			Set if L2 layer indicates IPv6 protocol.
*/
#define RX_MSDU_START_2_IPV6_PROTO_OFFSET                            0x00000008
#define RX_MSDU_START_2_IPV6_PROTO_LSB                               11
#define RX_MSDU_START_2_IPV6_PROTO_MASK                              0x00000800

/* Description		RX_MSDU_START_2_TCP_PROTO
			
			Set if the ipv4_proto or ipv6_proto are set and the IP
			protocol indicates TCP.
*/
#define RX_MSDU_START_2_TCP_PROTO_OFFSET                             0x00000008
#define RX_MSDU_START_2_TCP_PROTO_LSB                                12
#define RX_MSDU_START_2_TCP_PROTO_MASK                               0x00001000

/* Description		RX_MSDU_START_2_UDP_PROTO
			
			Set if the ipv4_proto or ipv6_proto are set and the IP
			protocol indicates UDP.
*/
#define RX_MSDU_START_2_UDP_PROTO_OFFSET                             0x00000008
#define RX_MSDU_START_2_UDP_PROTO_LSB                                13
#define RX_MSDU_START_2_UDP_PROTO_MASK                               0x00002000

/* Description		RX_MSDU_START_2_IP_FRAG
			
			Indicates that either the IP More frag bit is set or IP
			frag number is non-zero.  If set indicates that this is a
			fragmented IP packet.
*/
#define RX_MSDU_START_2_IP_FRAG_OFFSET                               0x00000008
#define RX_MSDU_START_2_IP_FRAG_LSB                                  14
#define RX_MSDU_START_2_IP_FRAG_MASK                                 0x00004000

/* Description		RX_MSDU_START_2_TCP_ONLY_ACK
			
			Set if only the TCP Ack bit is set in the TCP flags and
			if the TCP payload is 0.
*/
#define RX_MSDU_START_2_TCP_ONLY_ACK_OFFSET                          0x00000008
#define RX_MSDU_START_2_TCP_ONLY_ACK_LSB                             15
#define RX_MSDU_START_2_TCP_ONLY_ACK_MASK                            0x00008000

/* Description		RX_MSDU_START_2_SA_IDX
			
			The offset in the address table which matches the MAC
			source address.
*/
#define RX_MSDU_START_2_SA_IDX_OFFSET                                0x00000008
#define RX_MSDU_START_2_SA_IDX_LSB                                   16
#define RX_MSDU_START_2_SA_IDX_MASK                                  0x07ff0000

/* Description		RX_MSDU_START_2_RESERVED_2B
			
			Reserved: HW should fill with zero.  FW should ignore.
*/
#define RX_MSDU_START_2_RESERVED_2B_OFFSET                           0x00000008
#define RX_MSDU_START_2_RESERVED_2B_LSB                              27
#define RX_MSDU_START_2_RESERVED_2B_MASK                             0xf8000000

/* Description		RX_MSDU_START_3_DA_IDX
			
			The offset in the address table which matches the MAC
			source address
*/
#define RX_MSDU_START_3_DA_IDX_OFFSET                                0x0000000c
#define RX_MSDU_START_3_DA_IDX_LSB                                   0
#define RX_MSDU_START_3_DA_IDX_MASK                                  0x000007ff

/* Description		RX_MSDU_START_3_DA_IS_BCAST_MCAST
			
			The destination address is broadcast or multicast.
*/
#define RX_MSDU_START_3_DA_IS_BCAST_MCAST_OFFSET                     0x0000000c
#define RX_MSDU_START_3_DA_IS_BCAST_MCAST_LSB                        11
#define RX_MSDU_START_3_DA_IS_BCAST_MCAST_MASK                       0x00000800

/* Description		RX_MSDU_START_3_RESERVED_3A
			
			Reserved: HW should fill with zero.  FW should ignore.
*/
#define RX_MSDU_START_3_RESERVED_3A_OFFSET                           0x0000000c
#define RX_MSDU_START_3_RESERVED_3A_LSB                              12
#define RX_MSDU_START_3_RESERVED_3A_MASK                             0x0000f000

/* Description		RX_MSDU_START_3_IP4_PROTOCOL_IP6_NEXT_HEADER
			
			For IPv4 this is the 8 bit protocol field (when
			ipv4_proto is set).  For IPv6 this is the 8 bit next_header
			field (when ipv6_proto is set).
*/
#define RX_MSDU_START_3_IP4_PROTOCOL_IP6_NEXT_HEADER_OFFSET          0x0000000c
#define RX_MSDU_START_3_IP4_PROTOCOL_IP6_NEXT_HEADER_LSB             16
#define RX_MSDU_START_3_IP4_PROTOCOL_IP6_NEXT_HEADER_MASK            0x00ff0000

/* Description		RX_MSDU_START_3_RESERVED_3B
			
			Reserved: HW should fill with zero.  FW should ignore.
*/
#define RX_MSDU_START_3_RESERVED_3B_OFFSET                           0x0000000c
#define RX_MSDU_START_3_RESERVED_3B_LSB                              24
#define RX_MSDU_START_3_RESERVED_3B_MASK                             0xff000000


#endif // _RX_MSDU_START_H_
