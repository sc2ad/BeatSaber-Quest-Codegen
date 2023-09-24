#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace LiteNetLib {
class INetLogger;
}
namespace LiteNetLib {
struct NetLogLevel;
}
// Forward declare root types
namespace GlobalNamespace {
class NetLogger;
}
// Type: ::NetLogger
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12828))
// CS Name: NetLogger
class CORDL_TYPE NetLogger : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to LiteNetLib::INetLogger
constexpr operator  LiteNetLib::INetLogger() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NetLogger() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetLogger", modifiers: " const&", def_value: None }]
constexpr NetLogger(NetLogger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetLogger", modifiers: "&&", def_value: None }]
constexpr NetLogger(NetLogger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetLogger(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetLogger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetLogger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetLogger& operator=(NetLogger&& o) noexcept = default;
  constexpr NetLogger& operator=(NetLogger const& o) noexcept = default;
                


// Methods

/// @brief Method WriteNet addr 0xdbfd8c size 0x174 virtual true final true
 void WriteNet(LiteNetLib::NetLogLevel level, ::StringW str, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

static GlobalNamespace::NetLogger New_ctor() ;

/// @brief Method .ctor addr 0xdbff00 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NetLogger);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetLogger, "", "NetLogger");
