#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace GlobalNamespace {
class GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair;
}
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelSO;
}
// Type: ::PerceivedLevelLoudnessPair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4614))
// CS Name: PerceivedLoudnessPerLevelSO::PerceivedLevelLoudnessPair
class CORDL_TYPE GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair(GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair(GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair& operator=(GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair&& o) noexcept = default;
  constexpr GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair& operator=(GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__levelId, put=__set__levelId))  _levelId;

constexpr void __set__levelId(::StringW value) ;

constexpr ::StringW __get__levelId() const;

 float_t __declspec(property(get=__get__perceivedLoudness, put=__set__perceivedLoudness))  _perceivedLoudness;

constexpr void __set__perceivedLoudness(float_t value) ;

constexpr float_t __get__perceivedLoudness() const;

 ::StringW __declspec(property(get=__get__checkSum, put=__set__checkSum))  _checkSum;

constexpr void __set__checkSum(::StringW value) ;

constexpr ::StringW __get__checkSum() const;


// Properties

 ::StringW __declspec(property(get=get_levelId))  levelId;

 float_t __declspec(property(get=get_perceivedLoudness))  perceivedLoudness;

 ::StringW __declspec(property(get=get_checksum))  checksum;


// Methods

/// @brief Method get_levelId addr 0x2216178 size 0x8 virtual false final false
 ::StringW get_levelId() ;

/// @brief Method get_perceivedLoudness addr 0x2216180 size 0x8 virtual false final false
 float_t get_perceivedLoudness() ;

/// @brief Method get_checksum addr 0x2216188 size 0x8 virtual false final false
 ::StringW get_checksum() ;

static GlobalNamespace::GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair New_ctor(::StringW levelId, float_t perceivedLoudness, ::StringW checkSum) ;

/// @brief Method .ctor addr 0x2216190 size 0x40 virtual false final false
 void _ctor(::StringW levelId, float_t perceivedLoudness, ::StringW checkSum) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PerceivedLoudnessPerLevelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4615))
// CS Name: PerceivedLoudnessPerLevelSO
class CORDL_TYPE PerceivedLoudnessPerLevelSO : public UnityEngine::ScriptableObject {
public:
// Declarations
using PerceivedLevelLoudnessPair = GlobalNamespace::GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PerceivedLoudnessPerLevelSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "PerceivedLoudnessPerLevelSO", modifiers: " const&", def_value: None }]
constexpr PerceivedLoudnessPerLevelSO(PerceivedLoudnessPerLevelSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PerceivedLoudnessPerLevelSO", modifiers: "&&", def_value: None }]
constexpr PerceivedLoudnessPerLevelSO(PerceivedLoudnessPerLevelSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PerceivedLoudnessPerLevelSO(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr PerceivedLoudnessPerLevelSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PerceivedLoudnessPerLevelSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PerceivedLoudnessPerLevelSO& operator=(PerceivedLoudnessPerLevelSO&& o) noexcept = default;
  constexpr PerceivedLoudnessPerLevelSO& operator=(PerceivedLoudnessPerLevelSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair> __declspec(property(get=__get_perceivedLoudnessPerLevel, put=__set_perceivedLoudnessPerLevel))  perceivedLoudnessPerLevel;

constexpr void __set_perceivedLoudnessPerLevel(::ArrayW<GlobalNamespace::GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair> __get_perceivedLoudnessPerLevel() const;


// Methods

/// @brief Method ToDictionary addr 0x2216018 size 0xe0 virtual false final false
 System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair> ToDictionary() ;

/// @brief Method SetLoudnessData addr 0x22160f8 size 0x78 virtual false final false
 void SetLoudnessData(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair> loudnessDictionary) ;

static GlobalNamespace::PerceivedLoudnessPerLevelSO New_ctor() ;

/// @brief Method .ctor addr 0x2216170 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair, "", "PerceivedLoudnessPerLevelSO/PerceivedLevelLoudnessPair");
NEED_NO_BOX(GlobalNamespace::PerceivedLoudnessPerLevelSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PerceivedLoudnessPerLevelSO, "", "PerceivedLoudnessPerLevelSO");
