#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Runtime::InteropServices {
struct VarEnum;
}
namespace System::Runtime::InteropServices {
struct UnmanagedType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class MarshalAsAttribute;
}
// Type: System.Runtime.InteropServices::MarshalAsAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3334))
// CS Name: System.Runtime.InteropServices.MarshalAsAttribute
class CORDL_TYPE MarshalAsAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~MarshalAsAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "MarshalAsAttribute", modifiers: " const&", def_value: None }]
constexpr MarshalAsAttribute(MarshalAsAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MarshalAsAttribute", modifiers: "&&", def_value: None }]
constexpr MarshalAsAttribute(MarshalAsAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MarshalAsAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr MarshalAsAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MarshalAsAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MarshalAsAttribute& operator=(MarshalAsAttribute&& o) noexcept = default;
  constexpr MarshalAsAttribute& operator=(MarshalAsAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_MarshalCookie, put=__set_MarshalCookie))  MarshalCookie;

constexpr void __set_MarshalCookie(::StringW value) ;

constexpr ::StringW __get_MarshalCookie() const;

 ::StringW __declspec(property(get=__get_MarshalType, put=__set_MarshalType))  MarshalType;

constexpr void __set_MarshalType(::StringW value) ;

constexpr ::StringW __get_MarshalType() const;

 ::System::Type __declspec(property(get=__get_MarshalTypeRef, put=__set_MarshalTypeRef))  MarshalTypeRef;

constexpr void __set_MarshalTypeRef(::System::Type value) ;

constexpr ::System::Type __get_MarshalTypeRef() const;

 ::System::Type __declspec(property(get=__get_SafeArrayUserDefinedSubType, put=__set_SafeArrayUserDefinedSubType))  SafeArrayUserDefinedSubType;

constexpr void __set_SafeArrayUserDefinedSubType(::System::Type value) ;

constexpr ::System::Type __get_SafeArrayUserDefinedSubType() const;

 ::System::Runtime::InteropServices::UnmanagedType __declspec(property(get=__get_utype, put=__set_utype))  utype;

constexpr void __set_utype(::System::Runtime::InteropServices::UnmanagedType value) ;

constexpr ::System::Runtime::InteropServices::UnmanagedType __get_utype() const;

 ::System::Runtime::InteropServices::UnmanagedType __declspec(property(get=__get_ArraySubType, put=__set_ArraySubType))  ArraySubType;

constexpr void __set_ArraySubType(::System::Runtime::InteropServices::UnmanagedType value) ;

constexpr ::System::Runtime::InteropServices::UnmanagedType __get_ArraySubType() const;

 ::System::Runtime::InteropServices::VarEnum __declspec(property(get=__get_SafeArraySubType, put=__set_SafeArraySubType))  SafeArraySubType;

constexpr void __set_SafeArraySubType(::System::Runtime::InteropServices::VarEnum value) ;

constexpr ::System::Runtime::InteropServices::VarEnum __get_SafeArraySubType() const;

 int32_t __declspec(property(get=__get_SizeConst, put=__set_SizeConst))  SizeConst;

constexpr void __set_SizeConst(int32_t value) ;

constexpr int32_t __get_SizeConst() const;

 int32_t __declspec(property(get=__get_IidParameterIndex, put=__set_IidParameterIndex))  IidParameterIndex;

constexpr void __set_IidParameterIndex(int32_t value) ;

constexpr int32_t __get_IidParameterIndex() const;

 int16_t __declspec(property(get=__get_SizeParamIndex, put=__set_SizeParamIndex))  SizeParamIndex;

constexpr void __set_SizeParamIndex(int16_t value) ;

constexpr int16_t __get_SizeParamIndex() const;


// Properties

 ::System::Runtime::InteropServices::UnmanagedType __declspec(property(get=get_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "unmanagedType", ty: "::System::Runtime::InteropServices::UnmanagedType", modifiers: "", def_value: None }]
explicit MarshalAsAttribute(::System::Runtime::InteropServices::UnmanagedType unmanagedType) ;

/// @brief Method .ctor addr 0x236d764 size 0x28 virtual false final false
 void _ctor(::System::Runtime::InteropServices::UnmanagedType unmanagedType) ;

/// @brief Method get_Value addr 0x236d78c size 0x8 virtual false final false
 ::System::Runtime::InteropServices::UnmanagedType get_Value() ;

/// @brief Method Copy addr 0x236d794 size 0x64 virtual false final false
 ::System::Runtime::InteropServices::MarshalAsAttribute Copy() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::InteropServices::MarshalAsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::MarshalAsAttribute, "System.Runtime.InteropServices", "MarshalAsAttribute");
