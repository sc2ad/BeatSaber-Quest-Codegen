#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentTypeSO;
}
// Type: ::EnvironmentTypeSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4211))
// CS Name: EnvironmentTypeSO
class CORDL_TYPE EnvironmentTypeSO : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EnvironmentTypeSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentTypeSO", modifiers: " const&", def_value: None }]
constexpr EnvironmentTypeSO(EnvironmentTypeSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentTypeSO", modifiers: "&&", def_value: None }]
constexpr EnvironmentTypeSO(EnvironmentTypeSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvironmentTypeSO(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr EnvironmentTypeSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvironmentTypeSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvironmentTypeSO& operator=(EnvironmentTypeSO&& o) noexcept = default;
  constexpr EnvironmentTypeSO& operator=(EnvironmentTypeSO const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__typeNameLocalizationKey, put=__set__typeNameLocalizationKey))  _typeNameLocalizationKey;

constexpr void __set__typeNameLocalizationKey(::StringW value) ;

constexpr ::StringW __get__typeNameLocalizationKey() const;


// Properties

 ::StringW __declspec(property(get=get_typeNameLocalizationKey))  typeNameLocalizationKey;


// Methods

/// @brief Method get_typeNameLocalizationKey addr 0x21bf7a8 size 0x8 virtual false final false
 ::StringW get_typeNameLocalizationKey() ;

static GlobalNamespace::EnvironmentTypeSO New_ctor() ;

/// @brief Method .ctor addr 0x21bf7b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EnvironmentTypeSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentTypeSO, "", "EnvironmentTypeSO");
