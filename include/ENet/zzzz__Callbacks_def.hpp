#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace ENet {
class NoMemoryCallback;
}
namespace ENet {
struct ENetCallbacks;
}
namespace ENet {
class FreeCallback;
}
namespace ENet {
class AllocCallback;
}
// Forward declare root types
namespace ENet {
class Callbacks;
}
// Type: ENet::Callbacks
namespace ENet {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15271))
// CS Name: ENet.Callbacks
class CORDL_TYPE Callbacks : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Callbacks() = default;

// Ctor Parameters [CppParam { name: "", ty: "Callbacks", modifiers: " const&", def_value: None }]
constexpr Callbacks(Callbacks const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Callbacks", modifiers: "&&", def_value: None }]
constexpr Callbacks(Callbacks&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Callbacks(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Callbacks& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Callbacks& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Callbacks& operator=(Callbacks&& o) noexcept = default;
  constexpr Callbacks& operator=(Callbacks const& o) noexcept = default;
                


// Fields

 ENet::ENetCallbacks __declspec(property(get=__get_nativeCallbacks, put=__set_nativeCallbacks))  nativeCallbacks;

constexpr void __set_nativeCallbacks(ENet::ENetCallbacks value) ;

constexpr ENet::ENetCallbacks __get_nativeCallbacks() const;


// Properties

 ENet::ENetCallbacks __declspec(property(get=get_NativeData, put=set_NativeData))  NativeData;


// Methods

/// @brief Method get_NativeData addr 0x207d5c8 size 0x14 virtual false final false
 ENet::ENetCallbacks get_NativeData() ;

/// @brief Method set_NativeData addr 0x207d5dc size 0x14 virtual false final false
 void set_NativeData(ENet::ENetCallbacks value) ;

// Ctor Parameters [CppParam { name: "allocCallback", ty: "ENet::AllocCallback", modifiers: "", def_value: None }, CppParam { name: "freeCallback", ty: "ENet::FreeCallback", modifiers: "", def_value: None }, CppParam { name: "noMemoryCallback", ty: "ENet::NoMemoryCallback", modifiers: "", def_value: None }]
explicit Callbacks(ENet::AllocCallback allocCallback, ENet::FreeCallback freeCallback, ENet::NoMemoryCallback noMemoryCallback) ;

/// @brief Method .ctor addr 0x207d5f0 size 0x3c virtual false final false
 void _ctor(ENet::AllocCallback allocCallback, ENet::FreeCallback freeCallback, ENet::NoMemoryCallback noMemoryCallback) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ENet
NEED_NO_BOX(ENet::Callbacks);
DEFINE_IL2CPP_ARG_TYPE(ENet::Callbacks, "ENet", "Callbacks");
