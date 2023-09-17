#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayersMissingEntitlementsNetSerializable;
}
// Type: ::PlayersMissingEntitlementsNetSerializable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15122))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15121))
// CS Name: PlayersMissingEntitlementsNetSerializable
class CORDL_TYPE PlayersMissingEntitlementsNetSerializable : public ::GlobalNamespace::PoolableSerializable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PlayersMissingEntitlementsNetSerializable() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayersMissingEntitlementsNetSerializable", modifiers: " const&", def_value: None }]
constexpr PlayersMissingEntitlementsNetSerializable(PlayersMissingEntitlementsNetSerializable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayersMissingEntitlementsNetSerializable", modifiers: "&&", def_value: None }]
constexpr PlayersMissingEntitlementsNetSerializable(PlayersMissingEntitlementsNetSerializable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayersMissingEntitlementsNetSerializable(void* ptr) noexcept : ::GlobalNamespace::PoolableSerializable(ptr) {
}


  constexpr PlayersMissingEntitlementsNetSerializable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayersMissingEntitlementsNetSerializable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayersMissingEntitlementsNetSerializable& operator=(PlayersMissingEntitlementsNetSerializable&& o) noexcept = default;
  constexpr PlayersMissingEntitlementsNetSerializable& operator=(PlayersMissingEntitlementsNetSerializable const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get__playersWithoutEntitlements, put=__set__playersWithoutEntitlements))  _playersWithoutEntitlements;

constexpr void __set__playersWithoutEntitlements(::System::Collections::Generic::List_1<::StringW> value) ;

constexpr ::System::Collections::Generic::List_1<::StringW> __get__playersWithoutEntitlements() const;


// Properties

 ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=get_playersWithoutEntitlements))  playersWithoutEntitlements;


// Methods

/// @brief Method get_playersWithoutEntitlements addr 0x1218d5c size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::StringW> get_playersWithoutEntitlements() ;

/// @brief Method Obtain addr 0x1218d64 size 0x64 virtual false final false
static ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable Obtain() ;

// Ctor Parameters []
explicit PlayersMissingEntitlementsNetSerializable() ;

/// @brief Method .ctor addr 0x1218dc8 size 0xa0 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x1218e68 size 0x98 virtual false final false
 ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable Init(::System::Collections::Generic::IEnumerable_1<::StringW> playersWithoutEntitlements) ;

/// @brief Method Serialize addr 0x1218f00 size 0x160 virtual true final false
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x1219060 size 0x118 virtual true final false
 void Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable, "", "PlayersMissingEntitlementsNetSerializable");
