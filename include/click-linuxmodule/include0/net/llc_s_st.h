/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:33 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/net/llc_s_st.h */
#ifndef LLC_S_ST_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define LLC_S_ST_H
/*
 * Copyright (c) 1997 by Procom Technology,Inc.
 * 		 2001 by Arnaldo Carvalho de Melo <acme@conectiva.com.br>
 *
 * This program can be redistributed or modified under the terms of the
 * GNU General Public License as published by the Free Software Foundation.
 * This program is distributed without any warranty or implied warranty
 * of merchantability or fitness for a particular purpose.
 *
 * See the GNU General Public License for more details.
 */

#define LLC_NR_SAP_STATES	2       /* size of state table */

/* structures and types */
/* SAP state table structure */
struct llc_sap_state_trans {
	llc_sap_ev_t	  ev;
	u8		  next_state;
	llc_sap_action_t *ev_actions;
};

struct llc_sap_state {
	u8			   curr_state;
	struct llc_sap_state_trans **transitions;
};

/* only access to SAP state table */
extern struct llc_sap_state llc_sap_state_table[LLC_NR_SAP_STATES];
#endif /* LLC_S_ST_H */
