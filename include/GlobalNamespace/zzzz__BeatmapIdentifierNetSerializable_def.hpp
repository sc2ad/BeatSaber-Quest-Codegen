#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapIdentifierNetSerializable;
}
// Type: ::BeatmapIdentifierNetSerializable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15079))
// CS Name: BeatmapIdentifierNetSerializable
class CORDL_TYPE BeatmapIdentifierNetSerializable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to System::IEquatable_1<GlobalNamespace::BeatmapIdentifierNetSerializable>
constexpr operator  System::IEquatable_1<GlobalNamespace::BeatmapIdentifierNetSerializable>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BeatmapIdentifierNetSerializable() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapIdentifierNetSerializable", modifiers: " const&", def_value: None }]
constexpr BeatmapIdentifierNetSerializable(BeatmapIdentifierNetSerializable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapIdentifierNetSerializable", modifiers: "&&", def_value: None }]
constexpr BeatmapIdentifierNetSerializable(BeatmapIdentifierNetSerializable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapIdentifierNetSerializable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapIdentifierNetSerializable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapIdentifierNetSerializable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapIdentifierNetSerializable& operator=(BeatmapIdentifierNetSerializable&& o) noexcept = default;
  constexpr BeatmapIdentifierNetSerializable& operator=(BeatmapIdentifierNetSerializable const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__levelID_k__BackingField, put=__set__levelID_k__BackingField))  _levelID_k__BackingField;

constexpr void __set__levelID_k__BackingField(::StringW value) ;

constexpr ::StringW __get__levelID_k__BackingField() const;

 ::StringW __declspec(property(get=__get__beatmapCharacteristicSerializedName_k__BackingField, put=__set__beatmapCharacteristicSerializedName_k__BackingField))  _beatmapCharacteristicSerializedName_k__BackingField;

constexpr void __set__beatmapCharacteristicSerializedName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__beatmapCharacteristicSerializedName_k__BackingField() const;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get__difficulty_k__BackingField, put=__set__difficulty_k__BackingField))  _difficulty_k__BackingField;

constexpr void __set__difficulty_k__BackingField(GlobalNamespace::BeatmapDifficulty value) ;

constexpr GlobalNamespace::BeatmapDifficulty __get__difficulty_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_levelID, put=set_levelID))  levelID;

 ::StringW __declspec(property(get=get_beatmapCharacteristicSerializedName, put=set_beatmapCharacteristicSerializedName))  beatmapCharacteristicSerializedName;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=get_difficulty, put=set_difficulty))  difficulty;


// Methods

/// @brief Method get_levelID addr 0x1212dec size 0x8 virtual false final false
 ::StringW get_levelID() ;

/// @brief Method set_levelID addr 0x1212df4 size 0x8 virtual false final false
 void set_levelID(::StringW value) ;

/// @brief Method get_beatmapCharacteristicSerializedName addr 0x1212dfc size 0x8 virtual false final false
 ::StringW get_beatmapCharacteristicSerializedName() ;

/// @brief Method set_beatmapCharacteristicSerializedName addr 0x1212e04 size 0x8 virtual false final false
 void set_beatmapCharacteristicSerializedName(::StringW value) ;

/// @brief Method get_difficulty addr 0x1212e0c size 0x8 virtual false final false
 GlobalNamespace::BeatmapDifficulty get_difficulty() ;

/// @brief Method set_difficulty addr 0x1212e14 size 0x8 virtual false final false
 void set_difficulty(GlobalNamespace::BeatmapDifficulty value) ;

// Ctor Parameters []
explicit BeatmapIdentifierNetSerializable() ;

/// @brief Method .ctor addr 0x1212e1c size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "beatmapCharacteristicSerializedName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "difficulty", ty: "GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }]
explicit BeatmapIdentifierNetSerializable(::StringW levelID, ::StringW beatmapCharacteristicSerializedName, GlobalNamespace::BeatmapDifficulty difficulty) ;

/// @brief Method .ctor addr 0x1212e24 size 0x3c virtual false final false
 void _ctor(::StringW levelID, ::StringW beatmapCharacteristicSerializedName, GlobalNamespace::BeatmapDifficulty difficulty) ;

/// @brief Method LiteNetLib.Utils.INetSerializable.Deserialize addr 0x1212e60 size 0x50 virtual true final true
 void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method LiteNetLib.Utils.INetSerializable.Serialize addr 0x1212ec0 size 0x4c virtual true final true
 void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Equals addr 0x1212f14 size 0x70 virtual true final true
 bool Equals(GlobalNamespace::BeatmapIdentifierNetSerializable other) ;

/// @brief Method Equals addr 0x1212f84 size 0x10c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x1213090 size 0x64 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x12130f4 size 0x90 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapIdentifierNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapIdentifierNetSerializable, "", "BeatmapIdentifierNetSerializable");
