#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::Bindings {
class NativeMethodAttribute;
}
// Type: UnityEngine.Bindings::NativeMethodAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15873))
// CS Name: UnityEngine.Bindings.NativeMethodAttribute
class CORDL_TYPE NativeMethodAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~NativeMethodAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeMethodAttribute", modifiers: " const&", def_value: None }]
constexpr NativeMethodAttribute(NativeMethodAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeMethodAttribute", modifiers: "&&", def_value: None }]
constexpr NativeMethodAttribute(NativeMethodAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeMethodAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NativeMethodAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeMethodAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeMethodAttribute& operator=(NativeMethodAttribute&& o) noexcept = default;
  constexpr NativeMethodAttribute& operator=(NativeMethodAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField))  _Name_k__BackingField;

constexpr void __set__Name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Name_k__BackingField() const;

 bool __declspec(property(get=__get__IsThreadSafe_k__BackingField, put=__set__IsThreadSafe_k__BackingField))  _IsThreadSafe_k__BackingField;

constexpr void __set__IsThreadSafe_k__BackingField(bool value) ;

constexpr bool __get__IsThreadSafe_k__BackingField() const;

 bool __declspec(property(get=__get__IsFreeFunction_k__BackingField, put=__set__IsFreeFunction_k__BackingField))  _IsFreeFunction_k__BackingField;

constexpr void __set__IsFreeFunction_k__BackingField(bool value) ;

constexpr bool __get__IsFreeFunction_k__BackingField() const;

 bool __declspec(property(get=__get__ThrowsException_k__BackingField, put=__set__ThrowsException_k__BackingField))  _ThrowsException_k__BackingField;

constexpr void __set__ThrowsException_k__BackingField(bool value) ;

constexpr bool __get__ThrowsException_k__BackingField() const;

 bool __declspec(property(get=__get__HasExplicitThis_k__BackingField, put=__set__HasExplicitThis_k__BackingField))  _HasExplicitThis_k__BackingField;

constexpr void __set__HasExplicitThis_k__BackingField(bool value) ;

constexpr bool __get__HasExplicitThis_k__BackingField() const;


// Properties

 ::StringW __declspec(property(put=set_Name))  Name;

 bool __declspec(property(put=set_IsThreadSafe))  IsThreadSafe;

 bool __declspec(property(put=set_IsFreeFunction))  IsFreeFunction;

 bool __declspec(property(put=set_ThrowsException))  ThrowsException;

 bool __declspec(property(put=set_HasExplicitThis))  HasExplicitThis;


// Methods

/// @brief Method set_Name addr 0x2ba12f4 size 0x8 virtual true final true
 void set_Name(::StringW value) ;

/// @brief Method set_IsThreadSafe addr 0x2ba12fc size 0xc virtual true final true
 void set_IsThreadSafe(bool value) ;

/// @brief Method set_IsFreeFunction addr 0x2ba1308 size 0xc virtual true final true
 void set_IsFreeFunction(bool value) ;

/// @brief Method set_ThrowsException addr 0x2ba1314 size 0xc virtual true final true
 void set_ThrowsException(bool value) ;

/// @brief Method set_HasExplicitThis addr 0x2ba1320 size 0xc virtual true final true
 void set_HasExplicitThis(bool value) ;

// Ctor Parameters []
explicit NativeMethodAttribute() ;

/// @brief Method .ctor addr 0x2ba132c size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit NativeMethodAttribute(::StringW name) ;

/// @brief Method .ctor addr 0x2ba1334 size 0x104 virtual false final false
 void _ctor(::StringW name) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isFreeFunction", ty: "bool", modifiers: "", def_value: None }]
explicit NativeMethodAttribute(::StringW name, bool isFreeFunction) ;

/// @brief Method .ctor addr 0x2ba1438 size 0x28 virtual false final false
 void _ctor(::StringW name, bool isFreeFunction) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isFreeFunction", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isThreadSafe", ty: "bool", modifiers: "", def_value: None }]
explicit NativeMethodAttribute(::StringW name, bool isFreeFunction, bool isThreadSafe) ;

/// @brief Method .ctor addr 0x2ba1460 size 0x34 virtual false final false
 void _ctor(::StringW name, bool isFreeFunction, bool isThreadSafe) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Bindings
NEED_NO_BOX(UnityEngine::Bindings::NativeMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::NativeMethodAttribute, "UnityEngine.Bindings", "NativeMethodAttribute");
