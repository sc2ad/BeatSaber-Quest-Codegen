#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Runtime::Remoting {
class ObjRef;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class CADObjRef;
}
// Type: System.Runtime.Remoting.Messaging::CADObjRef
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3149))
// CS Name: System.Runtime.Remoting.Messaging.CADObjRef
class CORDL_TYPE CADObjRef : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CADObjRef() = default;

// Ctor Parameters [CppParam { name: "", ty: "CADObjRef", modifiers: " const&", def_value: None }]
constexpr CADObjRef(CADObjRef const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CADObjRef", modifiers: "&&", def_value: None }]
constexpr CADObjRef(CADObjRef&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CADObjRef(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CADObjRef& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CADObjRef& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CADObjRef& operator=(CADObjRef&& o) noexcept = default;
  constexpr CADObjRef& operator=(CADObjRef const& o) noexcept = default;
                


// Fields

 ::System::Runtime::Remoting::ObjRef __declspec(property(get=__get_objref, put=__set_objref))  objref;

constexpr void __set_objref(::System::Runtime::Remoting::ObjRef value) ;

constexpr ::System::Runtime::Remoting::ObjRef __get_objref() const;

 int32_t __declspec(property(get=__get_SourceDomain, put=__set_SourceDomain))  SourceDomain;

constexpr void __set_SourceDomain(int32_t value) ;

constexpr int32_t __get_SourceDomain() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_TypeInfo, put=__set_TypeInfo))  TypeInfo;

constexpr void __set_TypeInfo(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_TypeInfo() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::System::Runtime::Remoting::ObjRef", modifiers: "", def_value: None }, CppParam { name: "sourceDomain", ty: "int32_t", modifiers: "", def_value: None }]
explicit CADObjRef(::System::Runtime::Remoting::ObjRef o, int32_t sourceDomain) ;

/// @brief Method .ctor addr 0x233b9a4 size 0x48 virtual false final false
 void _ctor(::System::Runtime::Remoting::ObjRef o, int32_t sourceDomain) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CADObjRef);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CADObjRef, "System.Runtime.Remoting.Messaging", "CADObjRef");
