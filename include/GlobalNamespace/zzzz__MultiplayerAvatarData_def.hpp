#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Color32;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
template<typename T>
class INetImmutableSerializable_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
// Type: ::MultiplayerAvatarData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15111))
// CS Name: MultiplayerAvatarData
struct CORDL_TYPE MultiplayerAvatarData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::MultiplayerAvatarData>
constexpr operator  LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::MultiplayerAvatarData>() const;

/// @brief Convert operator to System::IEquatable_1<GlobalNamespace::MultiplayerAvatarData>
constexpr operator  System::IEquatable_1<GlobalNamespace::MultiplayerAvatarData>() const;

// Ctor Parameters [CppParam { name: "headTopId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "headTopPrimaryColor", ty: "UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "headTopSecondaryColor", ty: "UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "glassesId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "glassesColor", ty: "UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "facialHairId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "facialHairColor", ty: "UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "handsId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "handsColor", ty: "UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "clothesId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "clothesPrimaryColor", ty: "UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "clothesSecondaryColor", ty: "UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "clothesDetailColor", ty: "UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "skinColorId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "eyesId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mouthId", ty: "::StringW", modifiers: "", def_value: None }]
constexpr MultiplayerAvatarData(::StringW headTopId, UnityEngine::Color32 headTopPrimaryColor, UnityEngine::Color32 headTopSecondaryColor, ::StringW glassesId, UnityEngine::Color32 glassesColor, ::StringW facialHairId, UnityEngine::Color32 facialHairColor, ::StringW handsId, UnityEngine::Color32 handsColor, ::StringW clothesId, UnityEngine::Color32 clothesPrimaryColor, UnityEngine::Color32 clothesSecondaryColor, UnityEngine::Color32 clothesDetailColor, ::StringW skinColorId, ::StringW eyesId, ::StringW mouthId) noexcept;


                    constexpr MultiplayerAvatarData(MultiplayerAvatarData const&) = default;
                    constexpr MultiplayerAvatarData(MultiplayerAvatarData&&) = default;
                    constexpr MultiplayerAvatarData& operator=(MultiplayerAvatarData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MultiplayerAvatarData& operator=(MultiplayerAvatarData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x70};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MultiplayerAvatarData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_headTopId, put=__set_headTopId))  headTopId;

constexpr void __set_headTopId(::StringW value) ;

constexpr ::StringW __get_headTopId() const;

 UnityEngine::Color32 __declspec(property(get=__get_headTopPrimaryColor, put=__set_headTopPrimaryColor))  headTopPrimaryColor;

constexpr void __set_headTopPrimaryColor(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_headTopPrimaryColor() const;

 UnityEngine::Color32 __declspec(property(get=__get_headTopSecondaryColor, put=__set_headTopSecondaryColor))  headTopSecondaryColor;

constexpr void __set_headTopSecondaryColor(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_headTopSecondaryColor() const;

 ::StringW __declspec(property(get=__get_glassesId, put=__set_glassesId))  glassesId;

constexpr void __set_glassesId(::StringW value) ;

constexpr ::StringW __get_glassesId() const;

 UnityEngine::Color32 __declspec(property(get=__get_glassesColor, put=__set_glassesColor))  glassesColor;

constexpr void __set_glassesColor(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_glassesColor() const;

 ::StringW __declspec(property(get=__get_facialHairId, put=__set_facialHairId))  facialHairId;

constexpr void __set_facialHairId(::StringW value) ;

constexpr ::StringW __get_facialHairId() const;

 UnityEngine::Color32 __declspec(property(get=__get_facialHairColor, put=__set_facialHairColor))  facialHairColor;

constexpr void __set_facialHairColor(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_facialHairColor() const;

 ::StringW __declspec(property(get=__get_handsId, put=__set_handsId))  handsId;

constexpr void __set_handsId(::StringW value) ;

constexpr ::StringW __get_handsId() const;

 UnityEngine::Color32 __declspec(property(get=__get_handsColor, put=__set_handsColor))  handsColor;

constexpr void __set_handsColor(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_handsColor() const;

 ::StringW __declspec(property(get=__get_clothesId, put=__set_clothesId))  clothesId;

constexpr void __set_clothesId(::StringW value) ;

constexpr ::StringW __get_clothesId() const;

 UnityEngine::Color32 __declspec(property(get=__get_clothesPrimaryColor, put=__set_clothesPrimaryColor))  clothesPrimaryColor;

constexpr void __set_clothesPrimaryColor(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_clothesPrimaryColor() const;

 UnityEngine::Color32 __declspec(property(get=__get_clothesSecondaryColor, put=__set_clothesSecondaryColor))  clothesSecondaryColor;

constexpr void __set_clothesSecondaryColor(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_clothesSecondaryColor() const;

 UnityEngine::Color32 __declspec(property(get=__get_clothesDetailColor, put=__set_clothesDetailColor))  clothesDetailColor;

constexpr void __set_clothesDetailColor(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_clothesDetailColor() const;

 ::StringW __declspec(property(get=__get_skinColorId, put=__set_skinColorId))  skinColorId;

constexpr void __set_skinColorId(::StringW value) ;

constexpr ::StringW __get_skinColorId() const;

 ::StringW __declspec(property(get=__get_eyesId, put=__set_eyesId))  eyesId;

constexpr void __set_eyesId(::StringW value) ;

constexpr ::StringW __get_eyesId() const;

 ::StringW __declspec(property(get=__get_mouthId, put=__set_mouthId))  mouthId;

constexpr void __set_mouthId(::StringW value) ;

constexpr ::StringW __get_mouthId() const;


// Methods

/// @brief Method .ctor addr 0x1216304 size 0x4c virtual false final false
 void _ctor(::StringW headTopId, UnityEngine::Color32 headTopPrimaryColor, UnityEngine::Color32 headTopSecondaryColor, ::StringW glassesId, UnityEngine::Color32 glassesColor, ::StringW facialHairId, UnityEngine::Color32 facialHairColor, ::StringW handsId, UnityEngine::Color32 handsColor, ::StringW clothesId, UnityEngine::Color32 clothesPrimaryColor, UnityEngine::Color32 clothesSecondaryColor, UnityEngine::Color32 clothesDetailColor, ::StringW skinColorId, ::StringW eyesId, ::StringW mouthId) ;

/// @brief Method Serialize addr 0x1216350 size 0x154 virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method CreateFromSerializedData addr 0x121650c size 0x34 virtual true final true
 GlobalNamespace::MultiplayerAvatarData CreateFromSerializedData(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Deserialize addr 0x1216540 size 0x1b0 virtual false final false
static GlobalNamespace::MultiplayerAvatarData Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Equals addr 0x1216754 size 0x2d4 virtual true final true
 bool Equals(GlobalNamespace::MultiplayerAvatarData other) ;

/// @brief Method Equals addr 0x1216a28 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x1216ab8 size 0x2e0 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerAvatarData, "", "MultiplayerAvatarData");
