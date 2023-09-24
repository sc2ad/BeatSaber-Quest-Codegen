#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Bindings/zzzz__NativeMethodAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::Bindings {
struct TargetType;
}
// Forward declare root types
namespace UnityEngine::Bindings {
class NativePropertyAttribute;
}
// Type: UnityEngine.Bindings::NativePropertyAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15873))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15875))
// CS Name: UnityEngine.Bindings.NativePropertyAttribute
class CORDL_TYPE NativePropertyAttribute : public UnityEngine::Bindings::NativeMethodAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~NativePropertyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativePropertyAttribute", modifiers: " const&", def_value: None }]
constexpr NativePropertyAttribute(NativePropertyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativePropertyAttribute", modifiers: "&&", def_value: None }]
constexpr NativePropertyAttribute(NativePropertyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativePropertyAttribute(void* ptr) noexcept : UnityEngine::Bindings::NativeMethodAttribute(ptr) {
}


  constexpr NativePropertyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativePropertyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativePropertyAttribute& operator=(NativePropertyAttribute&& o) noexcept = default;
  constexpr NativePropertyAttribute& operator=(NativePropertyAttribute const& o) noexcept = default;
                


// Fields

 UnityEngine::Bindings::TargetType __declspec(property(get=__get__TargetType_k__BackingField, put=__set__TargetType_k__BackingField))  _TargetType_k__BackingField;

constexpr void __set__TargetType_k__BackingField(UnityEngine::Bindings::TargetType value) ;

constexpr UnityEngine::Bindings::TargetType __get__TargetType_k__BackingField() const;


// Properties

 UnityEngine::Bindings::TargetType __declspec(property(put=set_TargetType))  TargetType;


// Methods

/// @brief Method set_TargetType addr 0x2ba1494 size 0x8 virtual false final false
 void set_TargetType(UnityEngine::Bindings::TargetType value) ;

static UnityEngine::Bindings::NativePropertyAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2ba149c size 0x8 virtual false final false
 void _ctor() ;

static UnityEngine::Bindings::NativePropertyAttribute New_ctor(::StringW name) ;

/// @brief Method .ctor addr 0x2ba14a4 size 0x4 virtual false final false
 void _ctor(::StringW name) ;

static UnityEngine::Bindings::NativePropertyAttribute New_ctor(::StringW name, bool isFree, UnityEngine::Bindings::TargetType targetType) ;

/// @brief Method .ctor addr 0x2ba14a8 size 0x30 virtual false final false
 void _ctor(::StringW name, bool isFree, UnityEngine::Bindings::TargetType targetType) ;

static UnityEngine::Bindings::NativePropertyAttribute New_ctor(::StringW name, bool isFree, UnityEngine::Bindings::TargetType targetType, bool isThreadSafe) ;

/// @brief Method .ctor addr 0x2ba14d8 size 0x44 virtual false final false
 void _ctor(::StringW name, bool isFree, UnityEngine::Bindings::TargetType targetType, bool isThreadSafe) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Bindings
NEED_NO_BOX(UnityEngine::Bindings::NativePropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::NativePropertyAttribute, "UnityEngine.Bindings", "NativePropertyAttribute");
