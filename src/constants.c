#include "ezmq.h"

#define EZMQ_DEFCONST(sym, val)                                     \
    env->funcall(env, Qdefconst, 2,                                 \
                 (emacs_value []){ INTERN(sym), INT(val) })

// Automatically generated
void
ezmq_expose_constants(emacs_env *env)
{
    EZMQ_DEFCONST("zmq-HAS-CAPABILITIES", ZMQ_HAS_CAPABILITIES);
    EZMQ_DEFCONST("zmq-REQ-CORRELATE", ZMQ_REQ_CORRELATE);
    EZMQ_DEFCONST("zmq-DELAY-ATTACH-ON-CONNECT", ZMQ_DELAY_ATTACH_ON_CONNECT);
    EZMQ_DEFCONST("zmq-GSSAPI-PLAINTEXT", ZMQ_GSSAPI_PLAINTEXT);
    EZMQ_DEFCONST("zmq-EVENT-CLOSED", ZMQ_EVENT_CLOSED);
    EZMQ_DEFCONST("zmq-SNDMORE", ZMQ_SNDMORE);
    EZMQ_DEFCONST("zmq-THREAD-SCHED-POLICY", ZMQ_THREAD_SCHED_POLICY);
    EZMQ_DEFCONST("zmq-XPUB-WELCOME-MSG", ZMQ_XPUB_WELCOME_MSG);
    EZMQ_DEFCONST("zmq-PLAIN-USERNAME", ZMQ_PLAIN_USERNAME);
    EZMQ_DEFCONST("zmq-TYPE", ZMQ_TYPE);
    EZMQ_DEFCONST("zmq-ROUTER-MANDATORY", ZMQ_ROUTER_MANDATORY);
    EZMQ_DEFCONST("zmq-REP", ZMQ_REP);
    EZMQ_DEFCONST("zmq-STREAM-NOTIFY", ZMQ_STREAM_NOTIFY);
    EZMQ_DEFCONST("zmq-REQ", ZMQ_REQ);
    EZMQ_DEFCONST("zmq-CURVE-SERVER", ZMQ_CURVE_SERVER);
    EZMQ_DEFCONST("zmq-XPUB-NODROP", ZMQ_XPUB_NODROP);
    EZMQ_DEFCONST("zmq-IMMEDIATE", ZMQ_IMMEDIATE);
    EZMQ_DEFCONST("zmq-RECOVERY-IVL", ZMQ_RECOVERY_IVL);
    EZMQ_DEFCONST("zmq-IPV6", ZMQ_IPV6);
    EZMQ_DEFCONST("zmq-EVENT-ACCEPTED", ZMQ_EVENT_ACCEPTED);
    EZMQ_DEFCONST("zmq-THREAD-SCHED-POLICY-DFLT", ZMQ_THREAD_SCHED_POLICY_DFLT);
    EZMQ_DEFCONST("zmq-RCVMORE", ZMQ_RCVMORE);
    EZMQ_DEFCONST("zmq-PLAIN", ZMQ_PLAIN);
    EZMQ_DEFCONST("zmq-MULTICAST-HOPS", ZMQ_MULTICAST_HOPS);
    EZMQ_DEFCONST("zmq-SOCKET-LIMIT", ZMQ_SOCKET_LIMIT);
    EZMQ_DEFCONST("zmq-RECONNECT-IVL", ZMQ_RECONNECT_IVL);
    EZMQ_DEFCONST("zmq-GSSAPI-PRINCIPAL", ZMQ_GSSAPI_PRINCIPAL);
    EZMQ_DEFCONST("zmq-RECONNECT-IVL-MAX", ZMQ_RECONNECT_IVL_MAX);
    EZMQ_DEFCONST("zmq-HANDSHAKE-IVL", ZMQ_HANDSHAKE_IVL);
    EZMQ_DEFCONST("zmq-HAUSNUMERO", ZMQ_HAUSNUMERO);
    EZMQ_DEFCONST("zmq-GROUP-MAX-LENGTH", ZMQ_GROUP_MAX_LENGTH);
    EZMQ_DEFCONST("zmq-GSSAPI-SERVER", ZMQ_GSSAPI_SERVER);
    EZMQ_DEFCONST("zmq-TOS", ZMQ_TOS);
    EZMQ_DEFCONST("zmq-EVENT-CONNECT-RETRIED", ZMQ_EVENT_CONNECT_RETRIED);
    EZMQ_DEFCONST("zmq-EVENT-BIND-FAILED", ZMQ_EVENT_BIND_FAILED);
    EZMQ_DEFCONST("zmq-IO-THREADS-DFLT", ZMQ_IO_THREADS_DFLT);
    EZMQ_DEFCONST("zmq-THREAD-SAFE", ZMQ_THREAD_SAFE);
    EZMQ_DEFCONST("zmq-SUB", ZMQ_SUB);
    EZMQ_DEFCONST("zmq-GSSAPI", ZMQ_GSSAPI);
    EZMQ_DEFCONST("zmq-MECHANISM", ZMQ_MECHANISM);
    EZMQ_DEFCONST("zmq-GSSAPI-SERVICE-PRINCIPAL", ZMQ_GSSAPI_SERVICE_PRINCIPAL);
    EZMQ_DEFCONST("zmq-FD", ZMQ_FD);
    EZMQ_DEFCONST("zmq-AFFINITY", ZMQ_AFFINITY);
    EZMQ_DEFCONST("zmq-ROUTING-ID", ZMQ_ROUTING_ID);
    EZMQ_DEFCONST("zmq-XPUB", ZMQ_XPUB);
    EZMQ_DEFCONST("zmq-RCVBUF", ZMQ_RCVBUF);
    EZMQ_DEFCONST("zmq-EVENT-CONNECT-DELAYED", ZMQ_EVENT_CONNECT_DELAYED);
    EZMQ_DEFCONST("zmq-PLAIN-SERVER", ZMQ_PLAIN_SERVER);
    EZMQ_DEFCONST("zmq-EVENTS", ZMQ_EVENTS);
    EZMQ_DEFCONST("zmq-XPUB-VERBOSER", ZMQ_XPUB_VERBOSER);
    EZMQ_DEFCONST("zmq-XPUB-VERBOSE", ZMQ_XPUB_VERBOSE);
    EZMQ_DEFCONST("zmq-CURVE-PUBLICKEY", ZMQ_CURVE_PUBLICKEY);
    EZMQ_DEFCONST("zmq-EVENT-LISTENING", ZMQ_EVENT_LISTENING);
    EZMQ_DEFCONST("zmq-QUEUE", ZMQ_QUEUE);
    EZMQ_DEFCONST("zmq-BLOCKY", ZMQ_BLOCKY);
    EZMQ_DEFCONST("zmq-PULL", ZMQ_PULL);
    EZMQ_DEFCONST("zmq-RATE", ZMQ_RATE);
    EZMQ_DEFCONST("zmq-POLLOUT", ZMQ_POLLOUT);
    EZMQ_DEFCONST("zmq-TCP-KEEPALIVE-CNT", ZMQ_TCP_KEEPALIVE_CNT);
    EZMQ_DEFCONST("zmq-LINGER", ZMQ_LINGER);
    EZMQ_DEFCONST("zmq-STREAMER", ZMQ_STREAMER);
    EZMQ_DEFCONST("zmq-EVENT-CLOSE-FAILED", ZMQ_EVENT_CLOSE_FAILED);
    EZMQ_DEFCONST("zmq-CONNECT-TIMEOUT", ZMQ_CONNECT_TIMEOUT);
    EZMQ_DEFCONST("zmq-ROUTER-HANDOVER", ZMQ_ROUTER_HANDOVER);
    EZMQ_DEFCONST("zmq-PUSH", ZMQ_PUSH);
    EZMQ_DEFCONST("zmq-SHARED", ZMQ_SHARED);
    EZMQ_DEFCONST("zmq-HEARTBEAT-TTL", ZMQ_HEARTBEAT_TTL);
    EZMQ_DEFCONST("zmq-IDENTITY", ZMQ_IDENTITY);
    EZMQ_DEFCONST("zmq-MULTICAST-MAXTPDU", ZMQ_MULTICAST_MAXTPDU);
    EZMQ_DEFCONST("zmq-NULL", ZMQ_NULL);
    EZMQ_DEFCONST("zmq-ZAP-DOMAIN", ZMQ_ZAP_DOMAIN);
    EZMQ_DEFCONST("zmq-CURVE-SERVERKEY", ZMQ_CURVE_SERVERKEY);
    EZMQ_DEFCONST("zmq-IPV4ONLY", ZMQ_IPV4ONLY);
    EZMQ_DEFCONST("zmq-FORWARDER", ZMQ_FORWARDER);
    EZMQ_DEFCONST("zmq-RCVTIMEO", ZMQ_RCVTIMEO);
    EZMQ_DEFCONST("zmq-EVENT-DISCONNECTED", ZMQ_EVENT_DISCONNECTED);
    EZMQ_DEFCONST("zmq-MAX-SOCKETS-DFLT", ZMQ_MAX_SOCKETS_DFLT);
    EZMQ_DEFCONST("zmq-RCVHWM", ZMQ_RCVHWM);
    EZMQ_DEFCONST("zmq-CURVE", ZMQ_CURVE);
    EZMQ_DEFCONST("zmq-EVENT-MONITOR-STOPPED", ZMQ_EVENT_MONITOR_STOPPED);
    EZMQ_DEFCONST("zmq-REQ-RELAXED", ZMQ_REQ_RELAXED);
    EZMQ_DEFCONST("zmq-SUBSCRIBE", ZMQ_SUBSCRIBE);
    EZMQ_DEFCONST("zmq-ROUTER-RAW", ZMQ_ROUTER_RAW);
    EZMQ_DEFCONST("zmq-CONNECT-RID", ZMQ_CONNECT_RID);
    EZMQ_DEFCONST("zmq-XREP", ZMQ_XREP);
    EZMQ_DEFCONST("zmq-XREQ", ZMQ_XREQ);
    EZMQ_DEFCONST("zmq-TCP-KEEPALIVE", ZMQ_TCP_KEEPALIVE);
    EZMQ_DEFCONST("zmq-IPC-FILTER-GID", ZMQ_IPC_FILTER_GID);
    EZMQ_DEFCONST("zmq-PLAIN-PASSWORD", ZMQ_PLAIN_PASSWORD);
    EZMQ_DEFCONST("zmq-DEALER", ZMQ_DEALER);
    EZMQ_DEFCONST("zmq-EVENT-ACCEPT-FAILED", ZMQ_EVENT_ACCEPT_FAILED);
    EZMQ_DEFCONST("zmq-MAX-SOCKETS", ZMQ_MAX_SOCKETS);
    EZMQ_DEFCONST("zmq-SNDBUF", ZMQ_SNDBUF);
    EZMQ_DEFCONST("zmq-MORE", ZMQ_MORE);
    EZMQ_DEFCONST("zmq-VMCI-BUFFER-MAX-SIZE", ZMQ_VMCI_BUFFER_MAX_SIZE);
    EZMQ_DEFCONST("zmq-SNDTIMEO", ZMQ_SNDTIMEO);
    EZMQ_DEFCONST("zmq-MAXMSGSIZE", ZMQ_MAXMSGSIZE);
    EZMQ_DEFCONST("zmq-XPUB-MANUAL", ZMQ_XPUB_MANUAL);
    EZMQ_DEFCONST("zmq-CONFLATE", ZMQ_CONFLATE);
    EZMQ_DEFCONST("zmq-CONNECT-ROUTING-ID", ZMQ_CONNECT_ROUTING_ID);
    EZMQ_DEFCONST("zmq-DONTWAIT", ZMQ_DONTWAIT);
    EZMQ_DEFCONST("zmq-INVERT-MATCHING", ZMQ_INVERT_MATCHING);
    EZMQ_DEFCONST("zmq-POLLPRI", ZMQ_POLLPRI);
    EZMQ_DEFCONST("zmq-NOBLOCK", ZMQ_NOBLOCK);
    EZMQ_DEFCONST("zmq-THREAD-PRIORITY-DFLT", ZMQ_THREAD_PRIORITY_DFLT);
    EZMQ_DEFCONST("zmq-ROUTER", ZMQ_ROUTER);
    EZMQ_DEFCONST("zmq-SOCKS-PROXY", ZMQ_SOCKS_PROXY);
    EZMQ_DEFCONST("zmq-CURVE-SECRETKEY", ZMQ_CURVE_SECRETKEY);
    EZMQ_DEFCONST("zmq-TCP-KEEPALIVE-IDLE", ZMQ_TCP_KEEPALIVE_IDLE);
    EZMQ_DEFCONST("zmq-SNDHWM", ZMQ_SNDHWM);
    EZMQ_DEFCONST("zmq-POLLITEMS-DFLT", ZMQ_POLLITEMS_DFLT);
    EZMQ_DEFCONST("zmq-XSUB", ZMQ_XSUB);
    EZMQ_DEFCONST("zmq-DEFINED-STDINT", ZMQ_DEFINED_STDINT);
    EZMQ_DEFCONST("zmq-EVENT-CONNECTED", ZMQ_EVENT_CONNECTED);
    EZMQ_DEFCONST("zmq-THREAD-PRIORITY", ZMQ_THREAD_PRIORITY);
    EZMQ_DEFCONST("zmq-MAX-MSGSZ", ZMQ_MAX_MSGSZ);
    EZMQ_DEFCONST("zmq-SRCFD", ZMQ_SRCFD);
    EZMQ_DEFCONST("zmq-POLLIN", ZMQ_POLLIN);
    EZMQ_DEFCONST("zmq-TCP-KEEPALIVE-INTVL", ZMQ_TCP_KEEPALIVE_INTVL);
    EZMQ_DEFCONST("zmq-BACKLOG", ZMQ_BACKLOG);
    EZMQ_DEFCONST("zmq-IPC-FILTER-PID", ZMQ_IPC_FILTER_PID);
    EZMQ_DEFCONST("zmq-EVENT-ALL", ZMQ_EVENT_ALL);
    EZMQ_DEFCONST("zmq-VMCI-BUFFER-MIN-SIZE", ZMQ_VMCI_BUFFER_MIN_SIZE);
    EZMQ_DEFCONST("zmq-USE-FD", ZMQ_USE_FD);
    EZMQ_DEFCONST("zmq-IPC-FILTER-UID", ZMQ_IPC_FILTER_UID);
    EZMQ_DEFCONST("zmq-LAST-ENDPOINT", ZMQ_LAST_ENDPOINT);
    EZMQ_DEFCONST("zmq-PROBE-ROUTER", ZMQ_PROBE_ROUTER);
    EZMQ_DEFCONST("zmq-PAIR", ZMQ_PAIR);
    EZMQ_DEFCONST("zmq-UNSUBSCRIBE", ZMQ_UNSUBSCRIBE);
    EZMQ_DEFCONST("zmq-TCP-ACCEPT-FILTER", ZMQ_TCP_ACCEPT_FILTER);
    EZMQ_DEFCONST("zmq-VMCI-CONNECT-TIMEOUT", ZMQ_VMCI_CONNECT_TIMEOUT);
    EZMQ_DEFCONST("zmq-PUB", ZMQ_PUB);
    EZMQ_DEFCONST("zmq-FAIL-UNROUTABLE", ZMQ_FAIL_UNROUTABLE);
    EZMQ_DEFCONST("zmq-POLLERR", ZMQ_POLLERR);
    EZMQ_DEFCONST("zmq-HEARTBEAT-TIMEOUT", ZMQ_HEARTBEAT_TIMEOUT);
    EZMQ_DEFCONST("zmq-IO-THREADS", ZMQ_IO_THREADS);
    EZMQ_DEFCONST("zmq-TCP-MAXRT", ZMQ_TCP_MAXRT);
    EZMQ_DEFCONST("zmq-VMCI-BUFFER-SIZE", ZMQ_VMCI_BUFFER_SIZE);
    EZMQ_DEFCONST("zmq-STREAM", ZMQ_STREAM);
    EZMQ_DEFCONST("zmq-ROUTER-BEHAVIOR", ZMQ_ROUTER_BEHAVIOR);
    EZMQ_DEFCONST("zmq-HEARTBEAT-IVL", ZMQ_HEARTBEAT_IVL);
}