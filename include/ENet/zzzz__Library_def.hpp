#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace ENet {
class Callbacks;
}
// Forward declare root types
namespace ENet {
class Library;
}
// Type: ENet::Library
namespace ENet {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15276))
// CS Name: ENet.Library
class CORDL_TYPE Library : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Library() = default;

// Ctor Parameters [CppParam { name: "", ty: "Library", modifiers: " const&", def_value: None }]
constexpr Library(Library const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Library", modifiers: "&&", def_value: None }]
constexpr Library(Library&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Library(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Library& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Library& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Library& operator=(Library&& o) noexcept = default;
  constexpr Library& operator=(Library const& o) noexcept = default;
                


// Fields

/// @brief Field maxChannelCount offset 0
static constexpr uint32_t  maxChannelCount{255u};

/// @brief Field maxPeers offset 0
static constexpr uint32_t  maxPeers{4095u};

/// @brief Field maxPacketSize offset 0
static constexpr uint32_t  maxPacketSize{33554432u};

/// @brief Field throttleThreshold offset 0
static constexpr uint32_t  throttleThreshold{40u};

/// @brief Field throttleScale offset 0
static constexpr uint32_t  throttleScale{32u};

/// @brief Field throttleAcceleration offset 0
static constexpr uint32_t  throttleAcceleration{2u};

/// @brief Field throttleDeceleration offset 0
static constexpr uint32_t  throttleDeceleration{2u};

/// @brief Field throttleInterval offset 0
static constexpr uint32_t  throttleInterval{5000u};

/// @brief Field timeoutLimit offset 0
static constexpr uint32_t  timeoutLimit{32u};

/// @brief Field timeoutMinimum offset 0
static constexpr uint32_t  timeoutMinimum{5000u};

/// @brief Field timeoutMaximum offset 0
static constexpr uint32_t  timeoutMaximum{30000u};

/// @brief Field version offset 0
static constexpr uint32_t  version{132103u};


// Properties

static uint32_t __declspec(property(get=get_Time))  Time;


// Methods

/// @brief Method get_Time addr 0x20812e0 size 0x4 virtual false final false
static uint32_t get_Time() ;

/// @brief Method InitOpenSSL addr 0x208134c size 0x64 virtual false final false
static void InitOpenSSL() ;

/// @brief Method Initialize addr 0x20814b4 size 0x7c virtual false final false
static bool Initialize() ;

/// @brief Method Initialize addr 0x2081600 size 0xf0 virtual false final false
static bool Initialize(::ENet::Callbacks callbacks) ;

/// @brief Method Deinitialize addr 0x20817b4 size 0x4 virtual false final false
static void Deinitialize() ;

/// @brief Method CRC64 addr 0x208181c size 0x4 virtual false final false
static uint64_t CRC64(::cordl_internals::intptr_t buffers, int32_t bufferCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ENet
} // end anonymous namespace
NEED_NO_BOX(::ENet::Library);
DEFINE_IL2CPP_ARG_TYPE(::ENet::Library, "ENet", "Library");
