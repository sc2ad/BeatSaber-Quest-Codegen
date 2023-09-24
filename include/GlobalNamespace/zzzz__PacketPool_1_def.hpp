#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace GlobalNamespace {
template<typename T>
class IPacketPool_1;
}
namespace GlobalNamespace {
class IPacketPool;
}
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentBag_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class PacketPool_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class PacketPool_1<T>;
}
// Type: ::PacketPool`1
// Type: ::PacketPool`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12751))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12751), inst: 2 })
// CS Name: PacketPool`1
class CORDL_TYPE PacketPool_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IPacketPool_1<T>
constexpr operator  GlobalNamespace::IPacketPool_1<T>() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPacketPool
constexpr operator  GlobalNamespace::IPacketPool() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PacketPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "PacketPool_1", modifiers: " const&", def_value: None }]
constexpr PacketPool_1(PacketPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PacketPool_1", modifiers: "&&", def_value: None }]
constexpr PacketPool_1(PacketPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PacketPool_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PacketPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PacketPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PacketPool_1& operator=(PacketPool_1&& o) noexcept = default;
  constexpr PacketPool_1& operator=(PacketPool_1 const& o) noexcept = default;
                


// Fields

/// @brief Field kMaxPoolSize offset 0
static constexpr int32_t  kMaxPoolSize{16};

 System::Collections::Concurrent::ConcurrentBag_1<T> __declspec(property(get=__get__bag, put=__set__bag))  _bag;

constexpr void __set__bag(System::Collections::Concurrent::ConcurrentBag_1<T> value) ;

constexpr System::Collections::Concurrent::ConcurrentBag_1<T> __get__bag() const;


// Methods

/// @brief Method Obtain addr 0x0 size 0xffffffffffffffff virtual true final true
 T Obtain() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final true
 void Release(T t) ;

/// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual true final true
 void Fill() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method IPacketPool.Release addr 0x0 size 0xffffffffffffffff virtual true final true
 void IPacketPool_Release(GlobalNamespace::IPoolablePacket o) ;

static GlobalNamespace::PacketPool_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::PacketPool_1, "", "PacketPool`1");
