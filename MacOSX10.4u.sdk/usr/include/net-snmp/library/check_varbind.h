#ifndef SNMP_CHECK_VARBIND_H
#define SNMP_CHECK_VARBIND_H

#ifdef __cplusplus
extern          "C" {
#endif

    /*
     * Assorted convience routines to check the contents of a
     * netsnmp_variable_list instance.
     */

    int netsnmp_check_vb_type(const netsnmp_variable_list *var, int type);
    int netsnmp_check_vb_size(const netsnmp_variable_list *var, size_t size );
    int netsnmp_check_vb_size_range(const netsnmp_variable_list *var,
                                    size_t low, size_t high );

    int netsnmp_check_vb_type_and_size(const netsnmp_variable_list *var,
                                    int type, size_t size);

    int netsnmp_check_vb_int_range(const netsnmp_variable_list *var, int low,
                                   int high);

    int netsnmp_check_vb_truthvalue(const netsnmp_variable_list *var);

    int netsnmp_check_vb_rowstatus_value(const netsnmp_variable_list *var);
    int netsnmp_check_vb_rowstatus(const netsnmp_variable_list *var, int old_val);

    int netsnmp_check_vb_storagetype(const netsnmp_variable_list *var, int old_val);


#ifdef __cplusplus
}
#endif
#endif                          /* SNMP_CHECK_VARBIND_H */
