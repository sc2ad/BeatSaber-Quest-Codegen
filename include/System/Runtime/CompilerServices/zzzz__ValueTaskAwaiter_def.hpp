#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
namespace System {
class Action;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class System__Runtime__CompilerServices__ValueTaskAwaiter____c;
}
namespace System::Runtime::CompilerServices {
struct ValueTaskAwaiter;
}
// Type: ::<>c
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3381))
// CS Name: System.Runtime.CompilerServices.ValueTaskAwaiter::<>c
class CORDL_TYPE System__Runtime__CompilerServices__ValueTaskAwaiter____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Runtime__CompilerServices__ValueTaskAwaiter____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__CompilerServices__ValueTaskAwaiter____c", modifiers: " const&", def_value: None }]
constexpr System__Runtime__CompilerServices__ValueTaskAwaiter____c(System__Runtime__CompilerServices__ValueTaskAwaiter____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__CompilerServices__ValueTaskAwaiter____c", modifiers: "&&", def_value: None }]
constexpr System__Runtime__CompilerServices__ValueTaskAwaiter____c(System__Runtime__CompilerServices__ValueTaskAwaiter____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Runtime__CompilerServices__ValueTaskAwaiter____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Runtime__CompilerServices__ValueTaskAwaiter____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Runtime__CompilerServices__ValueTaskAwaiter____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Runtime__CompilerServices__ValueTaskAwaiter____c& operator=(System__Runtime__CompilerServices__ValueTaskAwaiter____c&& o) noexcept = default;
  constexpr System__Runtime__CompilerServices__ValueTaskAwaiter____c& operator=(System__Runtime__CompilerServices__ValueTaskAwaiter____c const& o) noexcept = default;
                


// Fields

static System::Runtime::CompilerServices::System__Runtime__CompilerServices__ValueTaskAwaiter____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ValueTaskAwaiter____c value) ;

static System::Runtime::CompilerServices::System__Runtime__CompilerServices__ValueTaskAwaiter____c __get___9() ;


// Methods

// Ctor Parameters []
explicit System__Runtime__CompilerServices__ValueTaskAwaiter____c() ;

/// @brief Method .ctor addr 0x236e9b8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__9_0 addr 0x236e9c0 size 0x74 virtual false final false
 void __cctor_b__9_0(::bs_hook::Il2CppWrapperType state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ValueTaskAwaiter
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3382))
// CS Name: System.Runtime.CompilerServices.ValueTaskAwaiter
struct CORDL_TYPE ValueTaskAwaiter : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using __c = System::Runtime::CompilerServices::System__Runtime__CompilerServices__ValueTaskAwaiter____c;

/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "_value", ty: "System::Threading::Tasks::ValueTask", modifiers: "", def_value: None }]
constexpr ValueTaskAwaiter(System::Threading::Tasks::ValueTask _value) noexcept;


                    constexpr ValueTaskAwaiter(ValueTaskAwaiter const&) = default;
                    constexpr ValueTaskAwaiter(ValueTaskAwaiter&&) = default;
                    constexpr ValueTaskAwaiter& operator=(ValueTaskAwaiter const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ValueTaskAwaiter& operator=(ValueTaskAwaiter&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ValueTaskAwaiter(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static System::Action_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_s_invokeActionDelegate, put=__set_s_invokeActionDelegate))  s_invokeActionDelegate;

static void __set_s_invokeActionDelegate(System::Action_1<::bs_hook::Il2CppWrapperType> value) ;

static System::Action_1<::bs_hook::Il2CppWrapperType> __get_s_invokeActionDelegate() ;

 System::Threading::Tasks::ValueTask __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(System::Threading::Tasks::ValueTask value) ;

constexpr System::Threading::Tasks::ValueTask __get__value() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x236e4e4 size 0x8 virtual false final false
 void _ctor(System::Threading::Tasks::ValueTask value) ;

/// @brief Method get_IsCompleted addr 0x236e4ec size 0x108 virtual false final false
 bool get_IsCompleted() ;

/// @brief Method GetResult addr 0x236e5f4 size 0x100 virtual false final false
 void GetResult() ;

/// @brief Method UnsafeOnCompleted addr 0x236e6f4 size 0x18c virtual true final true
 void UnsafeOnCompleted(System::Action continuation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ValueTaskAwaiter____c);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ValueTaskAwaiter____c, "System.Runtime.CompilerServices", "ValueTaskAwaiter/<>c");
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::ValueTaskAwaiter, "System.Runtime.CompilerServices", "ValueTaskAwaiter");
