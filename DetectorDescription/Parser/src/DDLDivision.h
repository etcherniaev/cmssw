#ifndef DDL_Division_H
#define DDL_Division_H

#include <map>
#include <string>

#include "DDDividedGeometryObject.h"
#include "DDXMLElement.h"
#include "DetectorDescription/Core/interface/DDDivision.h"

class DDCompactView;
class DDDividedGeometryObject;
class DDLElementRegistry;

/// DDLDivision processes Division elements.
/** @class DDLDivision
 * @author Michael Case
 *
 *  DDLDivision.h  -  description
 *  -------------------
 *  begin: Friday, April 23, 2004
 *  email: case@ucdhep.ucdavis.edu
 *
 *
 */

class DDLDivision : public DDXMLElement
{
public:

  /// Constructor
  DDLDivision( DDLElementRegistry* myreg );

  /// Destructor
  ~DDLDivision( void );

  void preProcessElement( const std::string& name, const std::string& nmspace, DDCompactView& cpv ); 

  void processElement( const std::string& name, const std::string& nmspace, DDCompactView& cpv ); 

private:

  DDDividedGeometryObject* makeDivider( const DDDivision& div, DDCompactView* cpv );
};

#endif

