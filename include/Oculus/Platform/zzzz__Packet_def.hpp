#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Oculus::Platform {
struct SendPolicy;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Oculus::Platform {
class Packet;
}
// Type: Oculus.Platform::Packet
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13304))
// CS Name: Oculus.Platform.Packet
class CORDL_TYPE Packet : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Packet() = default;

// Ctor Parameters [CppParam { name: "", ty: "Packet", modifiers: " const&", def_value: None }]
constexpr Packet(Packet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Packet", modifiers: "&&", def_value: None }]
constexpr Packet(Packet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Packet(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Packet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Packet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Packet& operator=(Packet&& o) noexcept = default;
  constexpr Packet& operator=(Packet const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get_size, put=__set_size))  size;

constexpr void __set_size(uint64_t value) ;

constexpr uint64_t __get_size() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_packetHandle, put=__set_packetHandle))  packetHandle;

constexpr void __set_packetHandle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_packetHandle() const;


// Properties

 uint64_t __declspec(property(get=get_SenderID))  SenderID;

 uint64_t __declspec(property(get=get_Size))  Size;

 Oculus::Platform::SendPolicy __declspec(property(get=get_Policy))  Policy;


// Methods

static Oculus::Platform::Packet New_ctor(::cordl_internals::intptr_t packetHandle) ;

/// @brief Method .ctor addr 0x2584f80 size 0xb0 virtual false final false
 void _ctor(::cordl_internals::intptr_t packetHandle) ;

/// @brief Method ReadBytes addr 0x2585030 size 0x144 virtual false final false
 uint64_t ReadBytes(::ArrayW<uint8_t> destination) ;

/// @brief Method get_SenderID addr 0x2585174 size 0x58 virtual false final false
 uint64_t get_SenderID() ;

/// @brief Method get_Size addr 0x25851cc size 0x8 virtual false final false
 uint64_t get_Size() ;

/// @brief Method get_Policy addr 0x25851d4 size 0x58 virtual false final false
 Oculus::Platform::SendPolicy get_Policy() ;

/// @brief Method Finalize addr 0x258522c size 0x94 virtual true final false
 void Finalize() ;

/// @brief Method Dispose addr 0x25852c0 size 0x88 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::Packet);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Packet, "Oculus.Platform", "Packet");
