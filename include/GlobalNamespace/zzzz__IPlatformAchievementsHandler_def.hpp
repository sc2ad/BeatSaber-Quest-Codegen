#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace GlobalNamespace {
class HMAsyncRequest;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult;
}
namespace GlobalNamespace {
struct GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult;
}
namespace GlobalNamespace {
class GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler;
}
namespace GlobalNamespace {
class GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler;
}
namespace GlobalNamespace {
class IPlatformAchievementsHandler;
}
// Type: ::UnlockAchievementResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4114))
// CS Name: IPlatformAchievementsHandler::UnlockAchievementResult
struct CORDL_TYPE GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult(int32_t value__) noexcept;


                    constexpr GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult(GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult const&) = default;
                    constexpr GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult(GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult&&) = default;
                    constexpr GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult& operator=(GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult& operator=(GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult_Unwrapped : int32_t {
__OK = 0,
__Failed = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OK offset 0
static GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult const OK;

/// @brief Field Failed offset 0
static GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult const Failed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetUnlockedAchievementsResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4115))
// CS Name: IPlatformAchievementsHandler::GetUnlockedAchievementsResult
struct CORDL_TYPE GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult(int32_t value__) noexcept;


                    constexpr GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult(GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult const&) = default;
                    constexpr GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult(GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult&&) = default;
                    constexpr GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult& operator=(GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult& operator=(GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult_Unwrapped : int32_t {
__OK = 0,
__Failed = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OK offset 0
static GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult const OK;

/// @brief Field Failed offset 0
static GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult const Failed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::UnlockAchievementCompletionHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4116))
// CS Name: IPlatformAchievementsHandler::UnlockAchievementCompletionHandler
class CORDL_TYPE GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler(GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler(GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler& operator=(GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler&& o) noexcept = default;
  constexpr GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler& operator=(GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x20c6e00 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x20c71c0 size 0x14 virtual true final false
 void Invoke(GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult result) ;

/// @brief Method BeginInvoke addr 0x20c71d4 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult result, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x20c7258 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetUnlockedAchievementsCompletionHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4117))
// CS Name: IPlatformAchievementsHandler::GetUnlockedAchievementsCompletionHandler
class CORDL_TYPE GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler(GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler(GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler& operator=(GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler&& o) noexcept = default;
  constexpr GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler& operator=(GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x20c6d34 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x20c7264 size 0x14 virtual true final false
 void Invoke(GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult result, ::ArrayW<::StringW> unlockedAchievementsIds) ;

/// @brief Method BeginInvoke addr 0x20c7278 size 0x90 virtual true final false
 System::IAsyncResult BeginInvoke(GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult result, ::ArrayW<::StringW> unlockedAchievementsIds, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x20c7308 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::IPlatformAchievementsHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4118))
// CS Name: IPlatformAchievementsHandler
class CORDL_TYPE IPlatformAchievementsHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
using GetUnlockedAchievementsCompletionHandler = GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler;

using UnlockAchievementCompletionHandler = GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler;

using GetUnlockedAchievementsResult = GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult;

using UnlockAchievementResult = GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult;

~IPlatformAchievementsHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPlatformAchievementsHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Initialize() ;

/// @brief Method UnlockAchievement addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::HMAsyncRequest UnlockAchievement(::StringW achievementId, GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler completionHandler) ;

/// @brief Method GetUnlockedAchievements addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::HMAsyncRequest GetUnlockedAchievements(GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler completionHandler) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult, "", "IPlatformAchievementsHandler/GetUnlockedAchievementsResult");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult, "", "IPlatformAchievementsHandler/UnlockAchievementResult");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler, "", "IPlatformAchievementsHandler/GetUnlockedAchievementsCompletionHandler");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler, "", "IPlatformAchievementsHandler/UnlockAchievementCompletionHandler");
NEED_NO_BOX(GlobalNamespace::IPlatformAchievementsHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IPlatformAchievementsHandler, "", "IPlatformAchievementsHandler");
