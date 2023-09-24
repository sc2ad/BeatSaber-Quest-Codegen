#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct MockPlayerMovementType;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerSettings;
}
// Type: ::MockPlayerSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5284))
// CS Name: MockPlayerSettings
class CORDL_TYPE MockPlayerSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~MockPlayerSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerSettings", modifiers: " const&", def_value: None }]
constexpr MockPlayerSettings(MockPlayerSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerSettings", modifiers: "&&", def_value: None }]
constexpr MockPlayerSettings(MockPlayerSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockPlayerSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MockPlayerSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockPlayerSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockPlayerSettings& operator=(MockPlayerSettings&& o) noexcept = default;
  constexpr MockPlayerSettings& operator=(MockPlayerSettings const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__userName, put=__set__userName))  _userName;

constexpr void __set__userName(::StringW value) ;

constexpr ::StringW __get__userName() const;

 ::StringW __declspec(property(get=__get__userId, put=__set__userId))  _userId;

constexpr void __set__userId(::StringW value) ;

constexpr ::StringW __get__userId() const;

 int32_t __declspec(property(get=__get__sortIndex, put=__set__sortIndex))  _sortIndex;

constexpr void __set__sortIndex(int32_t value) ;

constexpr int32_t __get__sortIndex() const;

 float_t __declspec(property(get=__get__latency, put=__set__latency))  _latency;

constexpr void __set__latency(float_t value) ;

constexpr float_t __get__latency() const;

 bool __declspec(property(get=__get__autoConnect, put=__set__autoConnect))  _autoConnect;

constexpr void __set__autoConnect(bool value) ;

constexpr bool __get__autoConnect() const;

 bool __declspec(property(get=__get__inactiveByDefault, put=__set__inactiveByDefault))  _inactiveByDefault;

constexpr void __set__inactiveByDefault(bool value) ;

constexpr bool __get__inactiveByDefault() const;

 GlobalNamespace::MockPlayerMovementType __declspec(property(get=__get__movementType, put=__set__movementType))  _movementType;

constexpr void __set__movementType(GlobalNamespace::MockPlayerMovementType value) ;

constexpr GlobalNamespace::MockPlayerMovementType __get__movementType() const;

 ::StringW __declspec(property(get=__get__recodingFile, put=__set__recodingFile))  _recodingFile;

constexpr void __set__recodingFile(::StringW value) ;

constexpr ::StringW __get__recodingFile() const;

 float_t __declspec(property(get=__get__aiCubeHitChance, put=__set__aiCubeHitChance))  _aiCubeHitChance;

constexpr void __set__aiCubeHitChance(float_t value) ;

constexpr float_t __get__aiCubeHitChance() const;

 bool __declspec(property(get=__get__leftHanded, put=__set__leftHanded))  _leftHanded;

constexpr void __set__leftHanded(bool value) ;

constexpr bool __get__leftHanded() const;

 UnityEngine::Color __declspec(property(get=__get__saberAColor, put=__set__saberAColor))  _saberAColor;

constexpr void __set__saberAColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__saberAColor() const;

 UnityEngine::Color __declspec(property(get=__get__saberBColor, put=__set__saberBColor))  _saberBColor;

constexpr void __set__saberBColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__saberBColor() const;

 UnityEngine::Color __declspec(property(get=__get__obstaclesColor, put=__set__obstaclesColor))  _obstaclesColor;

constexpr void __set__obstaclesColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__obstaclesColor() const;


// Properties

 ::StringW __declspec(property(get=get_userName, put=set_userName))  userName;

 ::StringW __declspec(property(get=get_userId, put=set_userId))  userId;

 int32_t __declspec(property(get=get_sortIndex, put=set_sortIndex))  sortIndex;

 float_t __declspec(property(get=get_latency, put=set_latency))  latency;

 bool __declspec(property(get=get_autoConnect, put=set_autoConnect))  autoConnect;

 bool __declspec(property(get=get_inactiveByDefault, put=set_inactiveByDefault))  inactiveByDefault;

 GlobalNamespace::MockPlayerMovementType __declspec(property(get=get_movementType, put=set_movementType))  movementType;

 ::StringW __declspec(property(get=get_recodingFile, put=set_recodingFile))  recodingFile;

 float_t __declspec(property(get=get_aiCubeHitChance, put=set_aiCubeHitChance))  aiCubeHitChance;

 bool __declspec(property(get=get_leftHanded, put=set_leftHanded))  leftHanded;

 UnityEngine::Color __declspec(property(get=get_saberAColor, put=set_saberAColor))  saberAColor;

 UnityEngine::Color __declspec(property(get=get_saberBColor, put=set_saberBColor))  saberBColor;

 UnityEngine::Color __declspec(property(get=get_obstaclesColor, put=set_obstaclesColor))  obstaclesColor;


// Methods

/// @brief Method get_userName addr 0x20ef908 size 0x8 virtual false final false
 ::StringW get_userName() ;

/// @brief Method set_userName addr 0x20ef910 size 0x8 virtual false final false
 void set_userName(::StringW value) ;

/// @brief Method get_userId addr 0x20ef918 size 0x8 virtual false final false
 ::StringW get_userId() ;

/// @brief Method set_userId addr 0x20ef920 size 0x8 virtual false final false
 void set_userId(::StringW value) ;

/// @brief Method get_sortIndex addr 0x20ef928 size 0x8 virtual false final false
 int32_t get_sortIndex() ;

/// @brief Method set_sortIndex addr 0x20ef930 size 0x8 virtual false final false
 void set_sortIndex(int32_t value) ;

/// @brief Method get_latency addr 0x20ef938 size 0x8 virtual false final false
 float_t get_latency() ;

/// @brief Method set_latency addr 0x20ef940 size 0x8 virtual false final false
 void set_latency(float_t value) ;

/// @brief Method get_autoConnect addr 0x20ef948 size 0x8 virtual false final false
 bool get_autoConnect() ;

/// @brief Method set_autoConnect addr 0x20ef950 size 0xc virtual false final false
 void set_autoConnect(bool value) ;

/// @brief Method get_inactiveByDefault addr 0x20ef95c size 0x8 virtual false final false
 bool get_inactiveByDefault() ;

/// @brief Method set_inactiveByDefault addr 0x20ef964 size 0xc virtual false final false
 void set_inactiveByDefault(bool value) ;

/// @brief Method get_movementType addr 0x20ef970 size 0x8 virtual false final false
 GlobalNamespace::MockPlayerMovementType get_movementType() ;

/// @brief Method set_movementType addr 0x20ef978 size 0x8 virtual false final false
 void set_movementType(GlobalNamespace::MockPlayerMovementType value) ;

/// @brief Method get_recodingFile addr 0x20ef980 size 0x8 virtual false final false
 ::StringW get_recodingFile() ;

/// @brief Method set_recodingFile addr 0x20ef988 size 0x8 virtual false final false
 void set_recodingFile(::StringW value) ;

/// @brief Method get_aiCubeHitChance addr 0x20ef990 size 0x8 virtual false final false
 float_t get_aiCubeHitChance() ;

/// @brief Method set_aiCubeHitChance addr 0x20ef998 size 0x8 virtual false final false
 void set_aiCubeHitChance(float_t value) ;

/// @brief Method get_leftHanded addr 0x20ef9a0 size 0x8 virtual false final false
 bool get_leftHanded() ;

/// @brief Method set_leftHanded addr 0x20ef9a8 size 0xc virtual false final false
 void set_leftHanded(bool value) ;

/// @brief Method get_saberAColor addr 0x20ef9b4 size 0xc virtual false final false
 UnityEngine::Color get_saberAColor() ;

/// @brief Method set_saberAColor addr 0x20ef9c0 size 0xc virtual false final false
 void set_saberAColor(UnityEngine::Color value) ;

/// @brief Method get_saberBColor addr 0x20ef9cc size 0xc virtual false final false
 UnityEngine::Color get_saberBColor() ;

/// @brief Method set_saberBColor addr 0x20ef9d8 size 0xc virtual false final false
 void set_saberBColor(UnityEngine::Color value) ;

/// @brief Method get_obstaclesColor addr 0x20ef9e4 size 0xc virtual false final false
 UnityEngine::Color get_obstaclesColor() ;

/// @brief Method set_obstaclesColor addr 0x20ef9f0 size 0xc virtual false final false
 void set_obstaclesColor(UnityEngine::Color value) ;

static GlobalNamespace::MockPlayerSettings New_ctor() ;

/// @brief Method .ctor addr 0x20ef9fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MockPlayerSettings);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayerSettings, "", "MockPlayerSettings");
