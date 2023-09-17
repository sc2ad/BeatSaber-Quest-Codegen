#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability;
}
namespace GlobalNamespace {
class ISonyOnlineServicesAvailabilityModel;
}
namespace GlobalNamespace {
class ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler;
}
// Type: ::OnlineServicesAvailability
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4659))
// CS Name: ISonyOnlineServicesAvailabilityModel::OnlineServicesAvailability
struct CORDL_TYPE ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability(____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability const&) = default;
                    constexpr ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability(____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability&&) = default;
                    constexpr ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability& operator=(____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability& operator=(____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability_Unwrapped : int32_t {
__Unknown = 0,
__Available = 1,
__Unavailable = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::GlobalNamespace::____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability const Unknown;

/// @brief Field Available offset 0
static ::GlobalNamespace::____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability const Available;

/// @brief Field Unavailable offset 0
static ::GlobalNamespace::____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability const Unavailable;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetOnlineServicesAvailabilityResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4660))
// CS Name: ISonyOnlineServicesAvailabilityModel::GetOnlineServicesAvailabilityResult
struct CORDL_TYPE ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult(____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult const&) = default;
                    constexpr ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult(____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult&&) = default;
                    constexpr ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult& operator=(____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult& operator=(____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult_Unwrapped : int32_t {
__Available = 0,
__Unavailable = 1,
__Failed = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Available offset 0
static ::GlobalNamespace::____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult const Available;

/// @brief Field Unavailable offset 0
static ::GlobalNamespace::____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult const Unavailable;

/// @brief Field Failed offset 0
static ::GlobalNamespace::____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult const Failed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetOnlineServicesAvailabilityCompletionHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4661))
// CS Name: ISonyOnlineServicesAvailabilityModel::GetOnlineServicesAvailabilityCompletionHandler
class CORDL_TYPE ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler(____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler(____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler& operator=(____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler&& o) noexcept = default;
  constexpr ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler& operator=(____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x221ae60 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x221af24 size 0x14 virtual true final false
 void Invoke(::GlobalNamespace::____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult result) ;

/// @brief Method BeginInvoke addr 0x221af38 size 0x84 virtual true final false
 ::System::IAsyncResult BeginInvoke(::GlobalNamespace::____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult result, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x221afbc size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ISonyOnlineServicesAvailabilityModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4662))
// CS Name: ISonyOnlineServicesAvailabilityModel
class CORDL_TYPE ISonyOnlineServicesAvailabilityModel : public ::cordl_internals::InterfaceW {
public:
// Declarations
using GetOnlineServicesAvailabilityCompletionHandler = ::GlobalNamespace::____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler;

using GetOnlineServicesAvailabilityResult = ::GlobalNamespace::____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult;

using OnlineServicesAvailability = ::GlobalNamespace::____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability;

~ISonyOnlineServicesAvailabilityModel() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISonyOnlineServicesAvailabilityModel(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::GlobalNamespace::____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability __declspec(property(get=get_onlineServicesAvailability))  onlineServicesAvailability;


// Methods

/// @brief Method get_onlineServicesAvailability addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability get_onlineServicesAvailability() ;

/// @brief Method GetOnlineServicesAvailability addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::HMAsyncRequest GetOnlineServicesAvailability(::GlobalNamespace::____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler completionHandler) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult, "", "ISonyOnlineServicesAvailabilityModel/GetOnlineServicesAvailabilityResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability, "", "ISonyOnlineServicesAvailabilityModel/OnlineServicesAvailability");
NEED_NO_BOX(::GlobalNamespace::ISonyOnlineServicesAvailabilityModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISonyOnlineServicesAvailabilityModel, "", "ISonyOnlineServicesAvailabilityModel");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler, "", "ISonyOnlineServicesAvailabilityModel/GetOnlineServicesAvailabilityCompletionHandler");
