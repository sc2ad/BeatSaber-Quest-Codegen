#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class LightGroupSO;
}
// Type: ::LightGroupSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14671))
// CS Name: LightGroupSO
class CORDL_TYPE LightGroupSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LightGroupSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupSO", modifiers: " const&", def_value: None }]
constexpr LightGroupSO(LightGroupSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupSO", modifiers: "&&", def_value: None }]
constexpr LightGroupSO(LightGroupSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightGroupSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr LightGroupSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightGroupSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightGroupSO& operator=(LightGroupSO&& o) noexcept = default;
  constexpr LightGroupSO& operator=(LightGroupSO const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__groupName, put=__set__groupName))  _groupName;

constexpr void __set__groupName(::StringW value) ;

constexpr ::StringW __get__groupName() const;

 ::StringW __declspec(property(get=__get__groupDescription, put=__set__groupDescription))  _groupDescription;

constexpr void __set__groupDescription(::StringW value) ;

constexpr ::StringW __get__groupDescription() const;

 int32_t __declspec(property(get=__get__groupId, put=__set__groupId))  _groupId;

constexpr void __set__groupId(int32_t value) ;

constexpr int32_t __get__groupId() const;

 int32_t __declspec(property(get=__get__startLightId, put=__set__startLightId))  _startLightId;

constexpr void __set__startLightId(int32_t value) ;

constexpr int32_t __get__startLightId() const;

 int32_t __declspec(property(get=__get__numberOfElements, put=__set__numberOfElements))  _numberOfElements;

constexpr void __set__numberOfElements(int32_t value) ;

constexpr int32_t __get__numberOfElements() const;

 int32_t __declspec(property(get=__get__sameIdElements, put=__set__sameIdElements))  _sameIdElements;

constexpr void __set__sameIdElements(int32_t value) ;

constexpr int32_t __get__sameIdElements() const;

 bool __declspec(property(get=__get__ignoreLightGroupEffectManager, put=__set__ignoreLightGroupEffectManager))  _ignoreLightGroupEffectManager;

constexpr void __set__ignoreLightGroupEffectManager(bool value) ;

constexpr bool __get__ignoreLightGroupEffectManager() const;


// Properties

 ::StringW __declspec(property(get=get_groupName))  groupName;

 int32_t __declspec(property(get=get_groupId))  groupId;

 int32_t __declspec(property(get=get_startLightId))  startLightId;

 int32_t __declspec(property(get=get_numberOfElements))  numberOfElements;

 int32_t __declspec(property(get=get_sameIdElements))  sameIdElements;

 bool __declspec(property(get=get_ignoreLightGroupEffectManager))  ignoreLightGroupEffectManager;


// Methods

/// @brief Method get_groupName addr 0x1f9bf78 size 0x8 virtual false final false
 ::StringW get_groupName() ;

/// @brief Method get_groupId addr 0x1f9bf80 size 0x8 virtual false final false
 int32_t get_groupId() ;

/// @brief Method get_startLightId addr 0x1f9bf88 size 0x8 virtual false final false
 int32_t get_startLightId() ;

/// @brief Method get_numberOfElements addr 0x1f9bf90 size 0x8 virtual false final false
 int32_t get_numberOfElements() ;

/// @brief Method get_sameIdElements addr 0x1f9bf98 size 0x8 virtual false final false
 int32_t get_sameIdElements() ;

/// @brief Method get_ignoreLightGroupEffectManager addr 0x1f9bfa0 size 0x8 virtual false final false
 bool get_ignoreLightGroupEffectManager() ;

// Ctor Parameters []
explicit LightGroupSO() ;

/// @brief Method .ctor addr 0x1f9bfa8 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LightGroupSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupSO, "", "LightGroupSO");
