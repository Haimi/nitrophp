#ifndef NITRO_API_H
#define NITRO_API_H

/**
 * CONSTANTS:
 */
 
 /**
 * Errors:
 */
 // NITRO_ERR_NONE                  0
 REGISTER_LONG_CONSTANT("NITRO_ERR_NONE", 0, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_ERRNO                 1
 REGISTER_LONG_CONSTANT("NITRO_ERR_ERRNO", 1, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_ALREADY_RUNNING       2
 REGISTER_LONG_CONSTANT("NITRO_ERR_ALREADY_RUNNING", 2, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_NOT_RUNNING           3
 REGISTER_LONG_CONSTANT("NITRO_ERR_NOT_RUNNING", 3, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_TCP_LOC_NOCOLON       4
 REGISTER_LONG_CONSTANT("NITRO_ERR_TCP_LOC_NOCOLON", 4, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_TCP_LOC_BADPORT       5
 REGISTER_LONG_CONSTANT("NITRO_ERR_TCP_LOC_BADPORT", 5, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_TCP_LOC_BADIPV4       6
 REGISTER_LONG_CONSTANT("NITRO_ERR_TCP_LOC_BADIPV4", 6, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_PARSE_BAD_TRANSPORT   7
 REGISTER_LONG_CONSTANT("NITRO_ERR_PARSE_BAD_TRANSPORT", 7, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_EAGAIN                8
 REGISTER_LONG_CONSTANT("NITRO_ERR_EAGAIN", 8, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_NO_RECIPIENT          9
 REGISTER_LONG_CONSTANT("NITRO_ERR_NO_RECIPIENT", 9, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_ENCRYPT               10
 REGISTER_LONG_CONSTANT("NITRO_ERR_ENCRYPT", 10, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_DECRYPT               11
 REGISTER_LONG_CONSTANT("NITRO_ERR_DECRYPT", 11, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_INVALID_CLEAR         12
 REGISTER_LONG_CONSTANT("NITRO_ERR_INVALID_CLEAR", 12, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_MAX_FRAME_EXCEEDED    13
 REGISTER_LONG_CONSTANT("NITRO_ERR_MAX_FRAME_EXCEEDED", 13, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_BAD_PROTOCOL_VERSION  14
 REGISTER_LONG_CONSTANT("NITRO_ERR_BAD_PROTOCOL_VERSION", 14, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_DOUBLE_HANDSHAKE      15
 REGISTER_LONG_CONSTANT("NITRO_ERR_DOUBLE_HANDSHAKE", 15, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_NO_HANDSHAKE          16
 REGISTER_LONG_CONSTANT("NITRO_ERR_NO_HANDSHAKE", 16, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_BAD_SUB               17
 REGISTER_LONG_CONSTANT("NITRO_ERR_BAD_SUB", 17, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_BAD_HANDSHAKE         18
 REGISTER_LONG_CONSTANT("NITRO_ERR_BAD_HANDSHAKE", 18, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_INVALID_CERT          19
 REGISTER_LONG_CONSTANT("NITRO_ERR_INVALID_CERT", 19, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_BAD_INPROC_OPT        20
 REGISTER_LONG_CONSTANT("NITRO_ERR_BAD_INPROC_OPT", 20, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_BAD_SECURE            21
 REGISTER_LONG_CONSTANT("NITRO_ERR_BAD_SECURE", 21, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_INPROC_ALREADY_BOUND  22
 REGISTER_LONG_CONSTANT("NITRO_ERR_INPROC_ALREADY_BOUND", 22, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_INPROC_NOT_BOUND      23
 REGISTER_LONG_CONSTANT("NITRO_ERR_INPROC_NOT_BOUND", 23, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_INPROC_NO_CONNECTIONS 24
 REGISTER_LONG_CONSTANT("NITRO_ERR_INPROC_NO_CONNECTIONS", 24, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_SUB_ALREADY           25
 REGISTER_LONG_CONSTANT("NITRO_ERR_SUB_ALREADY", 25, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_SUB_MISSING           26
 REGISTER_LONG_CONSTANT("NITRO_ERR_SUB_MISSING", 26, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_TCP_BAD_ANY           27
 REGISTER_LONG_CONSTANT("NITRO_ERR_TCP_BAD_ANY", 27, CONST_CS | CONST_PERSISTENT); 
 // NITRO_ERR_GAI                   28
 REGISTER_LONG_CONSTANT("NITRO_ERR_GAI", 28, CONST_CS | CONST_PERSISTENT); 
 
 /**
  * Frame Constants
  */
 // NITRO_FRAME_DATA                0
 REGISTER_LONG_CONSTANT("NITRO_FRAME_DATA", 0, CONST_CS | CONST_PERSISTENT); 
 // NITRO_FRAME_SUB                 1
 REGISTER_LONG_CONSTANT("NITRO_FRAME_SUB", 1, CONST_CS | CONST_PERSISTENT); 
 // NITRO_FRAME_HELLO               2 
 REGISTER_LONG_CONSTANT("NITRO_FRAME_HELLO", 2, CONST_CS | CONST_PERSISTENT); 
 // NITRO_FRAME_SECURE              3
 REGISTER_LONG_CONSTANT("NITRO_FRAME_SECURE", 4, CONST_CS | CONST_PERSISTENT); 
 // NITRO_MAX_FRAME 			    1024 // 1024 // 1024
 REGISTER_LONG_CONSTANT("NITRO_MAX_FRAME", 1073741824, CONST_CS | CONST_PERSISTENT); 
 
 /**
 * Other Constants:
 */
 // NITRO_NOBLOCK
 REGISTER_LONG_CONSTANT("NITRO_NOBLOCK", 0, CONST_CS | CONST_PERSISTENT); 
 // NITRO_REUSE 					1
 REGISTER_LONG_CONSTANT("NITRO_REUSE", 1, CONST_CS | CONST_PERSISTENT); 
 // NITOR_NOWAIT                   	2
 REGISTER_LONG_CONSTANT("NITOR_NOWAIT", 2, CONST_CS | CONST_PERSISTENT); 
 
/**
 * int nitro_runtime_start();
 * @return 0 on success, <0 on error
 */
 PHP_FUNCTION(nitro_runtime_start);

/**
 * void nitro_enable_stats();
 */
 PHP_FUNCTION(nitro_enable_stats);

/** 
 * int nitro_runtime_stop();
 * @return 0 on success, <0 on error
 */
 PHP_FUNCTION(nitro_runtime_stop);

/**
 * NITRO_ERROR nitro_error();
 * @return NITRO_ERROR
 */
 PHP_FUNCTION(nitro_error);

/**
 * char* nitro_errmsg(NITRO_ERROR error);
 * @param NITRO_ERROR
 * @return char*
 */
 PHP_FUNCTION(nitro_errmsg);
 
/**
 * void nitro_log_info(char *location, char *format, ...)
 * @param location - An identifer to represent the general domain or subsystem where the event being logged took place. FILE is a decent choice if you can't think of anything better.
 * @param format - printf-style format string
 * ... - Format args, ala printf
 */
 PHP_FUNCTION(nitro_log_info);
 
/**
 * void nitro_log_warn(char *location, char *format, ...)
 * @param location - An identifer to represent the general domain or subsystem where the event being logged took place. FILE is a decent choice if you can't think of anything better.
 * @param format - printf-style format string
 * ... - Format args, ala printf
 */
 PHP_FUNCTION(nitro_log_warn);
 
/**
 * void nitro_log_warning(char *location, char *format, ...)
 * @param location - An identifer to represent the general domain or subsystem where the event being logged took place. FILE is a decent choice if you can't think of anything better.
 * @param format - printf-style format string
 * ... - Format args, ala printf
 */
 PHP_FUNCTION(nitro_log_warning);
 
/**
 * void nitro_log_err(char *location, char *format, ...)
 * @param location - An identifer to represent the general domain or subsystem where the event being logged took place. FILE is a decent choice if you can't think of anything better.
 * @param format - printf-style format string
 * ... - Format args, ala printf
 */
 PHP_FUNCTION(nitro_log_err);
 
/**
 * void nitro_log_error(char *location, char *format, ...)
 * @param location - An identifer to represent the general domain or subsystem where the event being logged took place. FILE is a decent choice if you can't think of anything better.
 * @param format - printf-style format string
 * ... - Format args, ala printf
 */
 PHP_FUNCTION(nitro_log_error);
 
/**
 * nitro_sockopt_t* nitro_sockopt_new();
 * @return nitro_sockopt_t*
 */
 PHP_FUNCTION(nitro_sockopt_new);

/**
 * void nitro_sockopt_set_hwm(nitro_sockopt_t *opt, int hwm);
 * @param nitro_socket_t *opt - The socket options structure to modify
 * @param int hwm - Count of messages that can be outstanding before the nitro_send, nitro_recv, and friends block or fail.
 */
 PHP_FUNCTION(nitro_sockopt_set_hwm);
 
/**
 * void nitro_sockopt_set_hwm_detail(nitro_sockopt_t *opt, int hwm_in, int hwm_out_general, int hwm_out_private);
 * @param nitro_socket_t *opt - The socket options structure to modify
 * @param int hwm_in - Count of messages that can be outstanding in the receive queue before nitro_recv blocks/fails.
 * @param int hwm_out_general - Count of messages that can be outstanding in the general send queue before nitro_send, or nitro_relay_fw block/fail.
 * @param int hwm_out_private - Count of messages that can be outstanding in the direct send queues for a particular peer before nitro_reply and nitro_relay_bk fail (direct addressing schemes refuse to block as a safety mechanism) or nitro_pub skips delivery to the backed-up peer.
 */
 PHP_FUNCTION(nitro_sockopt_set_hwm_detail);

/**
 * void nitro_sockopt_set_want_eventfd(nitro_sockopt_t *opt, int want_eventfd);
 * @param nitro_socket_t *opt - The socket options structure to modify
 * @param int want_eventfd - 1 or 0 to indicate if the eventfd should or should not be updated when the recieve queue changes state
 */
 PHP_FUNCTION(nitro_sockopt_set_want_eventfd);
 
/**
 * void nitro_sockopt_set_close_linger(nitro_sockopt_t *opt, double close_linger);
 * @param nitro_socket_t *opt - The socket options structure to modify
 * @param double close_linger - Time, in seconds, to allow messages to flush.
 */
 PHP_FUNCTION(nitro_sockopt_set_close_linger);
 
/**
 * void nitro_sockopt_set_reconnect_interval(nitro_sockopt_t *opt, double reconnect_interval);
 * @attention Only applicable to TCP sockets; inproc sockets will assert if this value is set.
 * @param nitro_socket_t *opt - The socket options structure to modify
 * @param double reconnect_interval - Time, in seconds, to wait before retrying connection.
 */
 PHP_FUNCTION(nitro_sockopt_set_reconnect_interval);
 
/**
 * void nitro_sockopt_set_max_message_size(nitro_sockopt_t *opt, uint32_t max_message_size);
 * @param nitro_socket_t *opt - The socket options structure to modify
 * @param uint32_t max_message_size - Size, in bytes, of largest frame this socket will allow to be sent or received.
 */
 PHP_FUNCTION(nitro_sockopt_set_max_message_size);

/**
 * void nitro_sockopt_set_secure(nitro_sockopt_t *opt, int enabled);
 * @param nitro_socket_t *opt - The socket options structure to modify
 * @param int enabled - 1 or 0, to enable or disable encryption.
 */
 PHP_FUNCTION(nitro_sockopt_set_secure);
 
/**
 * void nitro_sockopt_set_secure_identity(nitro_sockopt_t *opt, uint8_t *ident, size_t ident_length, uint8_t *pkey, size_t pkey_length);
 * @param nitro_socket_t *opt - The socket options structure to modify
 * @param uint8_t *ident - The identity (crypto_box public key) of the socket
 * @param size_t ident_length - The length of the identity (Nitro will assert if it is not equal to crypto_box_PUBLICKEYBYTES
 * @param uint8_t *pkey - The crypto_box private key.
 * @param size_t pkey_length - The length of the private key (Nitro will assert if it is not equal to crypto_box_SECRETKEYBYTES
 */
 PHP_FUNCTION(nitro_sockopt_set_secure_identity);
 
/**
 * void nitro_sockopt_set_required_remote_ident(nitro_sockopt_t *opt, uint8_t *ident, size_t ident_length);
 * @param nitro_socket_t *opt - The socket options structure to modify
 * @param uint8_t *ident - The identity (crypto_box public key) of the socket
 * @param size_t ident_length - The length of the identity (Nitro will assert if it is not equal to crypto_box_PUBLICKEYBYTES
 */
 PHP_FUNCTION(nitro_sockopt_set_required_remote_ident);
 
/**
 * void nitro_sockopt_set_error_handler(nitro_sockopt_t *opt, nitro_error_handler handler, void *baton);
 * @param nitro_socket_t *opt - The socket options structure to modify
 * @param nitro_error_handler handler - An error handler callback that will take action when a background error occurs.
 * @param void *baton - Some pass-through object to be given to the error handler
 */
 PHP_FUNCTION(nitro_sockopt_set_error_handler);
 
/**
 * void nitro_sockopt_disable_error_handler(nitro_sockopt_t *opt);
 * @param nitro_socket_t *opt - The socket options structure to modify
 */
 PHP_FUNCTION(nitro_sockopt_disable_error_handler);
 
/**
 * void nitro_sockopt_destroy(nitro_sockopt_t *opt);
 * @param nitro_socket_t *opt - The socket options structure to modify
 */
 PHP_FUNCTION(nitro_sockopt_destroy);
 
/**
 * nitro_socket_t* nitro_socket_bind(char *location, nitro_sockopt_t *opt);
 * @param char *location - The socket location for binding.
 * @param nitro_sockopt_t *opt - The socket options, or NULL for default options.
 * @return nitro_socket_t*
 */
 PHP_FUNCTION(nitro_socket_bind);

/**
 * nitro_socket_t* nitro_socket_connect(char *location, nitro_sockopt_t *opt);
 * @param char *location - The socket location for binding.
 * @param nitro_sockopt_t *opt - The socket options, or NULL for default options.
 * @return nitro_socket_t*
 */
 PHP_FUNCTION(nitro_socket_connect);

/**
 * void nitro_socket_close(nitro_socket_t *socket);
 * @param nitro_socket_t *socket - The socket to close
 */
 PHP_FUNCTION(nitro_socket_close);
 
/**
 * nitro_frame_t* nitro_frame_new_copy(void *data, uint32_t size);
 * @param void *data - A pointer to the start of your message
 * @param uint32_t size - The length of your message
 * @return nitro_frame_t*
 */
 PHP_FUNCTION(nitro_frame_new_copy);
 
/**
 * nitro_frame_t* nitro_frame_new(void *data, uint32_t size, nitro_free_function ff, void *baton);
 * @param void *data - A pointer to the start of your message
 * @param uint32_t size - The length of your message
 * @param nitro_free_function ff - A function Nitro will invoke when it is done using your buffer.
 * @param void *baton - Something to pass through as the second argument of your free function.
 * @return nitro_frame_t*
 */
 PHP_FUNCTION(nitro_frame_new);

/**
 * nitro_frame_t* nitro_frame_new_heap(void *data, uint32_t size);
 * @param void *data - A pointer to the start of your message
 * @param uint32_t size - The length of your message
 * @return nitro_frame_t*
 */
 PHP_FUNCTION(nitro_frame_new_heap);

/**
 * void* nitro_frame_data(nitro_frame_t *fr);
 * @param nitro_frame_t *fr - The frame
 * @return void*
 */.
 PHP_FUNCTION(nitro_frame_data);

/**
 * uint32_t* nitro_frame_size(nitro_frame_t *fr);
 * @param nitro_frame_t *fr - The frame
 * @return uint_32_t*
 */
 PHP_FUNCTION(nitro_frame_size);
 
/**
 * void nitro_frame_destroy(nitro_frame_t *fr);
 * @param nitro_frame_t *fr - The frame
 */
 PHP_FUNCTION(nitro_frame_destroy);
 
/**
 * nitro_frame_t* nitro_recv(nitro_socket_t *s, int flags);
 * @param nitro_socket_t *s - The socket to receive from.
 * @param int flags - Flags to modify receive behavior
 * @return nitro_frame_t*
 */ 
 PHP_FUNCTION(nitro_recv);

/**
 * int nitro_send(nitro_frame_t **frp, nitro_socket_t *s, int flags);
 * @param nitro_frame_t **frp - A pointer to a frame pointer. The frame will be queued and the pointer will be NULLified unless NITRO_REUSE is in flags.
 * @param nitro_socket_t *s - The socket to send to.
 * @param int flags - Flags to modify send behavior
 * @return int
 */
 PHP_FUNCTION(nitro_send);

/**
 * int nitro_reply(nitro_frame_t *snd, nitro_frame_t **frp, nitro_socket_t *s, int flags);
 * @param nitro_frame_t *snd - A frame sent by a specific peer that identifies the "return address" for *frp.
 * @param nitro_frame_t **frp - A pointer to a frame pointer. The frame will be queued and the pointer will be NULLified unless NITRO_REUSE is in flags.
 * @param nitro_socket_t *s - The socket to send to.
 * @param int flags - Flags to modify send behavior
 * @return int
 */
 PHP_FUNCTION(nitro_reply);
 
/**
 * int nitro_relay_fw(nitro_frame_t *snd, nitro_frame_t **frp, nitro_socket_t *s, int flags);
 * @param nitro_frame_t *snd - A frame sent by a specific peer that contains a routing stack (a stack of "return addresses") that should be preserved in *frp.
 * @param nitro_frame_t **frp - A pointer to a frame pointer. The frame will be queued and the pointer will be NULLified unless NITRO_REUSE is in flags.
 * @param nitro_socket_t *s - The socket to send to.
 * @param int flags - Flags to modify send behavior
 * @return int
 */
 PHP_FUNCTION(nitro_relay_fw);

/**
 * int nitro_relay_bk(nitro_frame_t *snd, nitro_frame_t **frp, nitro_socket_t *s, int flags);
 * @param nitro_frame_t *snd - A frame coming back from a _reply that contains a routing stack that includes the appropriate next hop.
 * @param nitro_frame_t **frp - A pointer to a frame pointer. The frame will be queued and the pointer will be NULLified unless NITRO_REUSE is in flags.
 * @param nitro_socket_t *s - The socket to send to.
 * @param int flags - Flags to modify send behavior
 */
 PHP_FUNCTION(nitro_relay_bk);
 
/**
 * int Stcp_socket_sub(nitro_tcp_socket_t *s, uint8_t *k, size_t length);
 * @param nitro_socket_t *s - The socket with the subscribtion
 * @param uint8_t *k - The channel prefix
 * @param size_t length - The length of the prefix
 * @return int
 */
 PHP_FUNCTION(Stcp_socket_sub);
 
/**
 * int Stcp_socket_unsub(nitro_tcp_socket_t *s, uint8_t *k, size_t length);
 * @param nitro_socket_t *s - The socket with the subscribtion
 * @param uint8_t *k - The channel prefix
 * @param size_t length - The length of the prefix
 * @return int
 */
 PHP_FUNCTION(Stcp_socket_unsub);

/**
 * int nitro_pub(nitro_frame_t **frp, const uint8_t *k, size_t length, nitro_socket_t *s, int flags);
 * @param nitro_frame_t **frp - A pointer to a frame pointer. The frame will be queued and the pointer will be NULLified unless NITRO_REUSE is in flags.
 * @param const uint8_t *k - The channel key
 * @param size_t length - The length of the channel key
 * @param nitro_socket_t *s - The socket to broadcast on
 * @param int flags - Flags to modify send behavior
 * @return int
 */
 PHP_FUNCTION(nitro_pub);
 
#endif