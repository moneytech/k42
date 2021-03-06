/******************************************************************************
 * K42: (C) Copyright IBM Corp. 2001.
 * All Rights Reserved
 *
 * This file is distributed under the GNU LGPL. You should have
 * received a copy of the license along with K42; see the file LICENSE.html
 * in the top-level directory for more details.
 *
 * $Id: mount.h,v 1.2 2001/10/05 22:16:51 peterson Exp $
 *****************************************************************************/
/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef __MOUNT_H_
#define __MOUNT_H_

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif /* #ifdef __cplusplus */

#define MNTPATHLEN 1024
#define MNTNAMELEN 255
#define FHSIZE 32

typedef char dhandle[FHSIZE];

typedef char *dirpath;

typedef char *name;

typedef struct mountnode *mountlist;

typedef struct groupnode *grouplist;

typedef struct exportnode *exportlist;

struct mountnode {
	name hostname;
	dirpath directory;
	mountlist nextentry;
};
typedef struct mountnode mountnode;

struct groupnode {
	name grname;
	grouplist grnext;
};
typedef struct groupnode groupnode;

struct exportnode {
	dirpath filesys;
	grouplist groups;
	exportlist next;
};
typedef struct exportnode exportnode;

struct fhstatus {
	u_int status;
	union {
		dhandle directory;
	} fhstatus_u;
};
typedef struct fhstatus fhstatus;

#define MOUNTPROG 100005
#define MOUNTVERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define MOUNTPROC_NULL 0
extern  void * mountproc_null_1(void *, CLIENT *);
extern  void * mountproc_null_1_svc(void *, struct svc_req *);
#define MOUNTPROC_MNT 1
extern  fhstatus * mountproc_mnt_1(dirpath *, CLIENT *);
extern  fhstatus * mountproc_mnt_1_svc(dirpath *, struct svc_req *);
#define MOUNTPROC_DUMP 2
extern  mountlist * mountproc_dump_1(void *, CLIENT *);
extern  mountlist * mountproc_dump_1_svc(void *, struct svc_req *);
#define MOUNTPROC_UMNT 3
extern  void * mountproc_umnt_1(dirpath *, CLIENT *);
extern  void * mountproc_umnt_1_svc(dirpath *, struct svc_req *);
#define MOUNTPROC_UMNTALL 4
extern  void * mountproc_umntall_1(void *, CLIENT *);
extern  void * mountproc_umntall_1_svc(void *, struct svc_req *);
#define MOUNTPROC_EXPORT 5
extern  exportlist * mountproc_export_1(void *, CLIENT *);
extern  exportlist * mountproc_export_1_svc(void *, struct svc_req *);
extern int mountprog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* #if defined(__STDC__) || ... */
#define MOUNTPROC_NULL 0
extern  void * mountproc_null_1();
extern  void * mountproc_null_1_svc();
#define MOUNTPROC_MNT 1
extern  fhstatus * mountproc_mnt_1();
extern  fhstatus * mountproc_mnt_1_svc();
#define MOUNTPROC_DUMP 2
extern  mountlist * mountproc_dump_1();
extern  mountlist * mountproc_dump_1_svc();
#define MOUNTPROC_UMNT 3
extern  void * mountproc_umnt_1();
extern  void * mountproc_umnt_1_svc();
#define MOUNTPROC_UMNTALL 4
extern  void * mountproc_umntall_1();
extern  void * mountproc_umntall_1_svc();
#define MOUNTPROC_EXPORT 5
extern  exportlist * mountproc_export_1();
extern  exportlist * mountproc_export_1_svc();
extern int mountprog_1_freeresult ();
#endif /* #if defined(__STDC__) || ... */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_dhandle (XDR *, dhandle);
extern  bool_t xdr_dirpath (XDR *, dirpath*);
extern  bool_t xdr_name (XDR *, name*);
extern  bool_t xdr_mountlist (XDR *, mountlist*);
extern  bool_t xdr_grouplist (XDR *, grouplist*);
extern  bool_t xdr_exportlist (XDR *, exportlist*);
extern  bool_t xdr_mountnode (XDR *, mountnode*);
extern  bool_t xdr_groupnode (XDR *, groupnode*);
extern  bool_t xdr_exportnode (XDR *, exportnode*);
extern  bool_t xdr_fhstatus (XDR *, fhstatus*);

#else /* #if defined(__STDC__) || ... */
extern bool_t xdr_dhandle ();
extern bool_t xdr_dirpath ();
extern bool_t xdr_name ();
extern bool_t xdr_mountlist ();
extern bool_t xdr_grouplist ();
extern bool_t xdr_exportlist ();
extern bool_t xdr_mountnode ();
extern bool_t xdr_groupnode ();
extern bool_t xdr_exportnode ();
extern bool_t xdr_fhstatus ();

#endif /* #if defined(__STDC__) || ... */

#ifdef __cplusplus
}
#endif /* #ifdef __cplusplus */

#endif /* #ifndef __MOUNT_H_ */
