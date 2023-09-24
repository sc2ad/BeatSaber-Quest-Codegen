#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace GlobalNamespace {
class IPacketPool;
}
namespace System {
class Type;
}
namespace GlobalNamespace {
template<typename T>
class PacketPool_1;
}
// Forward declare root types
namespace GlobalNamespace {
class StaticPacketPoolProvider;
}
// Type: ::StaticPacketPoolProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12752))
// CS Name: StaticPacketPoolProvider
class CORDL_TYPE StaticPacketPoolProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StaticPacketPoolProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticPacketPoolProvider", modifiers: " const&", def_value: None }]
constexpr StaticPacketPoolProvider(StaticPacketPoolProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticPacketPoolProvider", modifiers: "&&", def_value: None }]
constexpr StaticPacketPoolProvider(StaticPacketPoolProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StaticPacketPoolProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StaticPacketPoolProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StaticPacketPoolProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StaticPacketPoolProvider& operator=(StaticPacketPoolProvider&& o) noexcept = default;
  constexpr StaticPacketPoolProvider& operator=(StaticPacketPoolProvider const& o) noexcept = default;
                


// Fields

static System::Collections::Concurrent::ConcurrentDictionary_2<System::Type,GlobalNamespace::IPacketPool> __declspec(property(get=__get__staticPools, put=__set__staticPools))  _staticPools;

static void __set__staticPools(System::Collections::Concurrent::ConcurrentDictionary_2<System::Type,GlobalNamespace::IPacketPool> value) ;

static System::Collections::Concurrent::ConcurrentDictionary_2<System::Type,GlobalNamespace::IPacketPool> __get__staticPools() ;


// Methods

/// @brief Method GetPacketPool addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static GlobalNamespace::PacketPool_1<T> GetPacketPool() ;

/// @brief Method TryGetPacketPool addr 0xdb25c0 size 0x90 virtual false final false
static bool TryGetPacketPool(System::Type t, ByRef<GlobalNamespace::IPacketPool> pool) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::StaticPacketPoolProvider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StaticPacketPoolProvider, "", "StaticPacketPoolProvider");
