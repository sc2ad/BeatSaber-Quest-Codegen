#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace GlobalNamespace {
template<typename T>
class PacketPool_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ThreadStaticPacketPool_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ThreadStaticPacketPool_1<T>;
}
// Type: ::ThreadStaticPacketPool`1
// Type: ::ThreadStaticPacketPool`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12753))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12753), inst: 2 })
// CS Name: ThreadStaticPacketPool`1
class CORDL_TYPE ThreadStaticPacketPool_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ThreadStaticPacketPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadStaticPacketPool_1", modifiers: " const&", def_value: None }]
constexpr ThreadStaticPacketPool_1(ThreadStaticPacketPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadStaticPacketPool_1", modifiers: "&&", def_value: None }]
constexpr ThreadStaticPacketPool_1(ThreadStaticPacketPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThreadStaticPacketPool_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ThreadStaticPacketPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThreadStaticPacketPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThreadStaticPacketPool_1& operator=(ThreadStaticPacketPool_1&& o) noexcept = default;
  constexpr ThreadStaticPacketPool_1& operator=(ThreadStaticPacketPool_1 const& o) noexcept = default;
                


// Properties

static ::GlobalNamespace::PacketPool_1<T> __declspec(property(get=get_pool))  pool;


// Methods

/// @brief Method get_pool addr 0x0 size 0xffffffffffffffff virtual false final false
static ::GlobalNamespace::PacketPool_1<T> get_pool() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ThreadStaticPacketPool_1, "", "ThreadStaticPacketPool`1");
