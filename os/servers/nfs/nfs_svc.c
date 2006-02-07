/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "nfs.h"
#include <stdio.h>
#include <stdlib.h>
#include <rpc/pmap_clnt.h>
#include <string.h>
#include <memory.h>
#include <sys/socket.h>
#include <netinet/in.h>

#ifndef SIG_PF
#define SIG_PF void(*)(int)
#endif

static void
nfs_program_2(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		nfsfhandle nfsproc_getattr_2_arg;
		sattrargs nfsproc_setattr_2_arg;
		diropargs nfsproc_lookup_2_arg;
		nfsfhandle nfsproc_readlink_2_arg;
		readargs nfsproc_read_2_arg;
		writeargs nfsproc_write_2_arg;
		createargs nfsproc_create_2_arg;
		diropargs nfsproc_remove_2_arg;
		renameargs nfsproc_rename_2_arg;
		linkargs nfsproc_link_2_arg;
		symlinkargs nfsproc_symlink_2_arg;
		createargs nfsproc_mkdir_2_arg;
		diropargs nfsproc_rmdir_2_arg;
		readdirargs nfsproc_readdir_2_arg;
		nfsfhandle nfsproc_statfs_2_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NFSPROC_NULL:
		_xdr_argument = (xdrproc_t) xdr_void;
		_xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nfsproc_null_2_svc;
		break;

	case NFSPROC_GETATTR:
		_xdr_argument = (xdrproc_t) xdr_nfsfhandle;
		_xdr_result = (xdrproc_t) xdr_attrstat;
		local = (char *(*)(char *, struct svc_req *)) nfsproc_getattr_2_svc;
		break;

	case NFSPROC_SETATTR:
		_xdr_argument = (xdrproc_t) xdr_sattrargs;
		_xdr_result = (xdrproc_t) xdr_attrstat;
		local = (char *(*)(char *, struct svc_req *)) nfsproc_setattr_2_svc;
		break;

	case NFSPROC_ROOT:
		_xdr_argument = (xdrproc_t) xdr_void;
		_xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nfsproc_root_2_svc;
		break;

	case NFSPROC_LOOKUP:
		_xdr_argument = (xdrproc_t) xdr_diropargs;
		_xdr_result = (xdrproc_t) xdr_diropres;
		local = (char *(*)(char *, struct svc_req *)) nfsproc_lookup_2_svc;
		break;

	case NFSPROC_READLINK:
		_xdr_argument = (xdrproc_t) xdr_nfsfhandle;
		_xdr_result = (xdrproc_t) xdr_readlinkres;
		local = (char *(*)(char *, struct svc_req *)) nfsproc_readlink_2_svc;
		break;

	case NFSPROC_READ:
		_xdr_argument = (xdrproc_t) xdr_readargs;
		_xdr_result = (xdrproc_t) xdr_readres;
		local = (char *(*)(char *, struct svc_req *)) nfsproc_read_2_svc;
		break;

	case NFSPROC_WRITECACHE:
		_xdr_argument = (xdrproc_t) xdr_void;
		_xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nfsproc_writecache_2_svc;
		break;

	case NFSPROC_WRITE:
		_xdr_argument = (xdrproc_t) xdr_writeargs;
		_xdr_result = (xdrproc_t) xdr_attrstat;
		local = (char *(*)(char *, struct svc_req *)) nfsproc_write_2_svc;
		break;

	case NFSPROC_CREATE:
		_xdr_argument = (xdrproc_t) xdr_createargs;
		_xdr_result = (xdrproc_t) xdr_diropres;
		local = (char *(*)(char *, struct svc_req *)) nfsproc_create_2_svc;
		break;

	case NFSPROC_REMOVE:
		_xdr_argument = (xdrproc_t) xdr_diropargs;
		_xdr_result = (xdrproc_t) xdr_nfsstat;
		local = (char *(*)(char *, struct svc_req *)) nfsproc_remove_2_svc;
		break;

	case NFSPROC_RENAME:
		_xdr_argument = (xdrproc_t) xdr_renameargs;
		_xdr_result = (xdrproc_t) xdr_nfsstat;
		local = (char *(*)(char *, struct svc_req *)) nfsproc_rename_2_svc;
		break;

	case NFSPROC_LINK:
		_xdr_argument = (xdrproc_t) xdr_linkargs;
		_xdr_result = (xdrproc_t) xdr_nfsstat;
		local = (char *(*)(char *, struct svc_req *)) nfsproc_link_2_svc;
		break;

	case NFSPROC_SYMLINK:
		_xdr_argument = (xdrproc_t) xdr_symlinkargs;
		_xdr_result = (xdrproc_t) xdr_nfsstat;
		local = (char *(*)(char *, struct svc_req *)) nfsproc_symlink_2_svc;
		break;

	case NFSPROC_MKDIR:
		_xdr_argument = (xdrproc_t) xdr_createargs;
		_xdr_result = (xdrproc_t) xdr_diropres;
		local = (char *(*)(char *, struct svc_req *)) nfsproc_mkdir_2_svc;
		break;

	case NFSPROC_RMDIR:
		_xdr_argument = (xdrproc_t) xdr_diropargs;
		_xdr_result = (xdrproc_t) xdr_nfsstat;
		local = (char *(*)(char *, struct svc_req *)) nfsproc_rmdir_2_svc;
		break;

	case NFSPROC_READDIR:
		_xdr_argument = (xdrproc_t) xdr_readdirargs;
		_xdr_result = (xdrproc_t) xdr_readdirres;
		local = (char *(*)(char *, struct svc_req *)) nfsproc_readdir_2_svc;
		break;

	case NFSPROC_STATFS:
		_xdr_argument = (xdrproc_t) xdr_nfsfhandle;
		_xdr_result = (xdrproc_t) xdr_statfsres;
		local = (char *(*)(char *, struct svc_req *)) nfsproc_statfs_2_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "unable to free arguments");
		exit (1);
	}
	return;
}

int
main (int argc, char **argv)
{
	register SVCXPRT *transp;

	pmap_unset (NFS_PROGRAM, NFS_VERSION);

	transp = svcudp_create(RPC_ANYSOCK);
	if (transp == NULL) {
		fprintf (stderr, "cannot create udp service.");
		exit(1);
	}
	if (!svc_register(transp, NFS_PROGRAM, NFS_VERSION, nfs_program_2, IPPROTO_UDP)) {
		fprintf (stderr, "unable to register (NFS_PROGRAM, NFS_VERSION, udp).");
		exit(1);
	}

	transp = svctcp_create(RPC_ANYSOCK, 0, 0);
	if (transp == NULL) {
		fprintf (stderr, "cannot create tcp service.");
		exit(1);
	}
	if (!svc_register(transp, NFS_PROGRAM, NFS_VERSION, nfs_program_2, IPPROTO_TCP)) {
		fprintf (stderr, "unable to register (NFS_PROGRAM, NFS_VERSION, tcp).");
		exit(1);
	}

	svc_run ();
	fprintf (stderr, "svc_run returned");
	exit (1);
	/* NOTREACHED */
}