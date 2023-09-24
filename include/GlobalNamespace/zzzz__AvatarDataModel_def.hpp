#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class AvatarSaveData;
}
namespace GlobalNamespace {
class AvatarPartsModel;
}
namespace GlobalNamespace {
class AvatarData;
}
namespace GlobalNamespace {
class ISaveData;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarDataModel;
}
// Type: ::AvatarDataModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4767))
// CS Name: AvatarDataModel
class CORDL_TYPE AvatarDataModel : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AvatarDataModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarDataModel", modifiers: " const&", def_value: None }]
constexpr AvatarDataModel(AvatarDataModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarDataModel", modifiers: "&&", def_value: None }]
constexpr AvatarDataModel(AvatarDataModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarDataModel(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AvatarDataModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarDataModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarDataModel& operator=(AvatarDataModel&& o) noexcept = default;
  constexpr AvatarDataModel& operator=(AvatarDataModel const& o) noexcept = default;
                


// Fields

/// @brief Field kAvatarDataFileName offset 0
static constexpr ::ConstString  kAvatarDataFileName{u"AvatarData.dat"};

/// @brief Field kTempFileName offset 0
static constexpr ::ConstString  kTempFileName{u"AvatarData.dat.tmp"};

/// @brief Field kBackupFileName offset 0
static constexpr ::ConstString  kBackupFileName{u"AvatarData.dat.bak"};

 GlobalNamespace::AvatarPartsModel __declspec(property(get=__get__avatarPartsModel, put=__set__avatarPartsModel))  _avatarPartsModel;

constexpr void __set__avatarPartsModel(GlobalNamespace::AvatarPartsModel value) ;

constexpr GlobalNamespace::AvatarPartsModel __get__avatarPartsModel() const;

 GlobalNamespace::ISaveData __declspec(property(get=__get__saveData, put=__set__saveData))  _saveData;

constexpr void __set__saveData(GlobalNamespace::ISaveData value) ;

constexpr GlobalNamespace::ISaveData __get__saveData() const;

 GlobalNamespace::AvatarData __declspec(property(get=__get__avatarData_k__BackingField, put=__set__avatarData_k__BackingField))  _avatarData_k__BackingField;

constexpr void __set__avatarData_k__BackingField(GlobalNamespace::AvatarData value) ;

constexpr GlobalNamespace::AvatarData __get__avatarData_k__BackingField() const;


// Properties

 GlobalNamespace::AvatarData __declspec(property(get=get_avatarData, put=set_avatarData))  avatarData;


// Methods

/// @brief Method get_avatarData addr 0x22274e4 size 0x8 virtual false final false
 GlobalNamespace::AvatarData get_avatarData() ;

/// @brief Method set_avatarData addr 0x22274ec size 0x8 virtual false final false
 void set_avatarData(GlobalNamespace::AvatarData value) ;

/// @brief Method OnEnable addr 0x22274f4 size 0x4 virtual false final false
 void OnEnable() ;

/// @brief Method Randomize addr 0x2227520 size 0x18 virtual false final false
 void Randomize() ;

/// @brief Method Save addr 0x2227638 size 0x1c4 virtual false final false
 void Save() ;

/// @brief Method Load addr 0x22274f8 size 0x28 virtual false final false
 void Load() ;

/// @brief Method LoadFromSaveData addr 0x2227804 size 0xb0 virtual false final false
static GlobalNamespace::AvatarData LoadFromSaveData(GlobalNamespace::ISaveData saveData) ;

/// @brief Method LoadFromCurrentVersion addr 0x22278b4 size 0x24c virtual false final false
static GlobalNamespace::AvatarData LoadFromCurrentVersion(GlobalNamespace::AvatarSaveData avatarSaveData) ;

/// @brief Method CreateDefaultAvatarData addr 0x2227538 size 0x100 virtual false final false
 GlobalNamespace::AvatarData CreateDefaultAvatarData() ;

static GlobalNamespace::AvatarDataModel New_ctor() ;

/// @brief Method .ctor addr 0x2227b40 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AvatarDataModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarDataModel, "", "AvatarDataModel");
