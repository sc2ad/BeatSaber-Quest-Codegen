#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Attribute;
}
namespace System::Runtime::InteropServices {
struct CharSet;
}
namespace System::Runtime::InteropServices {
struct CallingConvention;
}
namespace System::Reflection {
class RuntimeMethodInfo;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class DllImportAttribute;
}
// Type: System.Runtime.InteropServices::DllImportAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3324))
// CS Name: System.Runtime.InteropServices.DllImportAttribute
class CORDL_TYPE DllImportAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DllImportAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DllImportAttribute", modifiers: " const&", def_value: None }]
constexpr DllImportAttribute(DllImportAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DllImportAttribute", modifiers: "&&", def_value: None }]
constexpr DllImportAttribute(DllImportAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DllImportAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr DllImportAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DllImportAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DllImportAttribute& operator=(DllImportAttribute&& o) noexcept = default;
  constexpr DllImportAttribute& operator=(DllImportAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__val, put=__set__val))  _val;

constexpr void __set__val(::StringW value) ;

constexpr ::StringW __get__val() const;

 ::StringW __declspec(property(get=__get_EntryPoint, put=__set_EntryPoint))  EntryPoint;

constexpr void __set_EntryPoint(::StringW value) ;

constexpr ::StringW __get_EntryPoint() const;

 System::Runtime::InteropServices::CharSet __declspec(property(get=__get_CharSet, put=__set_CharSet))  CharSet;

constexpr void __set_CharSet(System::Runtime::InteropServices::CharSet value) ;

constexpr System::Runtime::InteropServices::CharSet __get_CharSet() const;

 bool __declspec(property(get=__get_SetLastError, put=__set_SetLastError))  SetLastError;

constexpr void __set_SetLastError(bool value) ;

constexpr bool __get_SetLastError() const;

 bool __declspec(property(get=__get_ExactSpelling, put=__set_ExactSpelling))  ExactSpelling;

constexpr void __set_ExactSpelling(bool value) ;

constexpr bool __get_ExactSpelling() const;

 bool __declspec(property(get=__get_PreserveSig, put=__set_PreserveSig))  PreserveSig;

constexpr void __set_PreserveSig(bool value) ;

constexpr bool __get_PreserveSig() const;

 System::Runtime::InteropServices::CallingConvention __declspec(property(get=__get_CallingConvention, put=__set_CallingConvention))  CallingConvention;

constexpr void __set_CallingConvention(System::Runtime::InteropServices::CallingConvention value) ;

constexpr System::Runtime::InteropServices::CallingConvention __get_CallingConvention() const;

 bool __declspec(property(get=__get_BestFitMapping, put=__set_BestFitMapping))  BestFitMapping;

constexpr void __set_BestFitMapping(bool value) ;

constexpr bool __get_BestFitMapping() const;

 bool __declspec(property(get=__get_ThrowOnUnmappableChar, put=__set_ThrowOnUnmappableChar))  ThrowOnUnmappableChar;

constexpr void __set_ThrowOnUnmappableChar(bool value) ;

constexpr bool __get_ThrowOnUnmappableChar() const;


// Properties

 ::StringW __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method GetCustomAttribute addr 0x236ace0 size 0x1b8 virtual false final false
static System::Attribute GetCustomAttribute(System::Reflection::RuntimeMethodInfo method) ;

/// @brief Method IsDefined addr 0x236af24 size 0x28 virtual false final false
static bool IsDefined(System::Reflection::RuntimeMethodInfo method) ;

// Ctor Parameters [CppParam { name: "dllName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "entryPoint", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "charSet", ty: "System::Runtime::InteropServices::CharSet", modifiers: "", def_value: None }, CppParam { name: "exactSpelling", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "setLastError", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "preserveSig", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "callingConvention", ty: "System::Runtime::InteropServices::CallingConvention", modifiers: "", def_value: None }, CppParam { name: "bestFitMapping", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "throwOnUnmappableChar", ty: "bool", modifiers: "", def_value: None }]
explicit DllImportAttribute(::StringW dllName, ::StringW entryPoint, System::Runtime::InteropServices::CharSet charSet, bool exactSpelling, bool setLastError, bool preserveSig, System::Runtime::InteropServices::CallingConvention callingConvention, bool bestFitMapping, bool throwOnUnmappableChar) ;

/// @brief Method .ctor addr 0x236ae98 size 0x8c virtual false final false
 void _ctor(::StringW dllName, ::StringW entryPoint, System::Runtime::InteropServices::CharSet charSet, bool exactSpelling, bool setLastError, bool preserveSig, System::Runtime::InteropServices::CallingConvention callingConvention, bool bestFitMapping, bool throwOnUnmappableChar) ;

// Ctor Parameters [CppParam { name: "dllName", ty: "::StringW", modifiers: "", def_value: None }]
explicit DllImportAttribute(::StringW dllName) ;

/// @brief Method .ctor addr 0x236af4c size 0x28 virtual false final false
 void _ctor(::StringW dllName) ;

/// @brief Method get_Value addr 0x236af74 size 0x8 virtual false final false
 ::StringW get_Value() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(System::Runtime::InteropServices::DllImportAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::DllImportAttribute, "System.Runtime.InteropServices", "DllImportAttribute");
