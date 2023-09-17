#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
namespace {
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SynchronizedActionQueue;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__SynchronizedActionQueue__SynchronizedAction;
}
// Type: ::SynchronizedAction
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12907))
// CS Name: SynchronizedActionQueue::SynchronizedAction
struct CORDL_TYPE ____GlobalNamespace__SynchronizedActionQueue__SynchronizedAction : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "action", ty: "::System::Action", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__SynchronizedActionQueue__SynchronizedAction(float_t time, ::System::Action action) noexcept;


                    constexpr ____GlobalNamespace__SynchronizedActionQueue__SynchronizedAction(____GlobalNamespace__SynchronizedActionQueue__SynchronizedAction const&) = default;
                    constexpr ____GlobalNamespace__SynchronizedActionQueue__SynchronizedAction(____GlobalNamespace__SynchronizedActionQueue__SynchronizedAction&&) = default;
                    constexpr ____GlobalNamespace__SynchronizedActionQueue__SynchronizedAction& operator=(____GlobalNamespace__SynchronizedActionQueue__SynchronizedAction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__SynchronizedActionQueue__SynchronizedAction& operator=(____GlobalNamespace__SynchronizedActionQueue__SynchronizedAction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__SynchronizedActionQueue__SynchronizedAction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(float_t value) ;

constexpr float_t __get_time() const;

 ::System::Action __declspec(property(get=__get_action, put=__set_action))  action;

constexpr void __set_action(::System::Action value) ;

constexpr ::System::Action __get_action() const;


// Methods

/// @brief Method .ctor addr 0xdcc460 size 0xc virtual false final false
 void _ctor(float_t time, ::System::Action action) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SynchronizedActionQueue
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12908))
// CS Name: SynchronizedActionQueue
class CORDL_TYPE SynchronizedActionQueue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SynchronizedAction = ::GlobalNamespace::____GlobalNamespace__SynchronizedActionQueue__SynchronizedAction;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SynchronizedActionQueue() = default;

// Ctor Parameters [CppParam { name: "", ty: "SynchronizedActionQueue", modifiers: " const&", def_value: None }]
constexpr SynchronizedActionQueue(SynchronizedActionQueue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SynchronizedActionQueue", modifiers: "&&", def_value: None }]
constexpr SynchronizedActionQueue(SynchronizedActionQueue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SynchronizedActionQueue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SynchronizedActionQueue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SynchronizedActionQueue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SynchronizedActionQueue& operator=(SynchronizedActionQueue&& o) noexcept = default;
  constexpr SynchronizedActionQueue& operator=(SynchronizedActionQueue const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__SynchronizedActionQueue__SynchronizedAction> __declspec(property(get=__get__synchronizedActionQueue, put=__set__synchronizedActionQueue))  _synchronizedActionQueue;

constexpr void __set__synchronizedActionQueue(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__SynchronizedActionQueue__SynchronizedAction> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__SynchronizedActionQueue__SynchronizedAction> __get__synchronizedActionQueue() const;


// Methods

/// @brief Method Clear addr 0xdcc334 size 0x70 virtual false final false
 void Clear() ;

/// @brief Method EnqueueAction addr 0xdcc3a4 size 0xbc virtual false final false
 void EnqueueAction(float_t time, ::System::Action action) ;

/// @brief Method Update addr 0xdcc46c size 0x114 virtual false final false
 void Update(float_t time) ;

// Ctor Parameters []
explicit SynchronizedActionQueue() ;

/// @brief Method .ctor addr 0xdcc580 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SynchronizedActionQueue);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SynchronizedActionQueue, "", "SynchronizedActionQueue");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__SynchronizedActionQueue__SynchronizedAction, "", "SynchronizedActionQueue/SynchronizedAction");
