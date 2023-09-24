#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_def.hpp"
#include <cstdint>
namespace System {
class Exception;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class AsyncComputeOperation_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class AsyncComputeOperation_1<T>;
}
// Type: ::AsyncComputeOperation`1
// Type: ::AsyncComputeOperation`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12621)), TypeDefinitionIndex(TypeDefinitionIndex(12622))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12622), inst: 2 })
// CS Name: AsyncComputeOperation`1
class CORDL_TYPE AsyncComputeOperation_1<T> : public GlobalNamespace::AsyncComputeOperation {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AsyncComputeOperation_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncComputeOperation_1", modifiers: " const&", def_value: None }]
constexpr AsyncComputeOperation_1(AsyncComputeOperation_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncComputeOperation_1", modifiers: "&&", def_value: None }]
constexpr AsyncComputeOperation_1(AsyncComputeOperation_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncComputeOperation_1(void* ptr) noexcept : GlobalNamespace::AsyncComputeOperation(ptr) {
}


  constexpr AsyncComputeOperation_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncComputeOperation_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncComputeOperation_1& operator=(AsyncComputeOperation_1&& o) noexcept = default;
  constexpr AsyncComputeOperation_1& operator=(AsyncComputeOperation_1 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::TaskCompletionSource_1<T> __declspec(property(get=__get__tcs, put=__set__tcs))  _tcs;

constexpr void __set__tcs(System::Threading::Tasks::TaskCompletionSource_1<T> value) ;

constexpr System::Threading::Tasks::TaskCompletionSource_1<T> __get__tcs() const;


// Properties

 System::Threading::Tasks::Task_1<T> __declspec(property(get=get_task))  task;


// Methods

/// @brief Method get_task addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Threading::Tasks::Task_1<T> get_task() ;

static GlobalNamespace::AsyncComputeOperation_1<T> New_ctor(int32_t timeoutMs) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t timeoutMs) ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final true
 void Execute(bool disposed) ;

/// @brief Method IsValidRequest addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IsValidRequest() ;

/// @brief Method Complete addr 0x0 size 0xffffffffffffffff virtual false final false
 void Complete(T computeResult) ;

/// @brief Method Cancel addr 0x0 size 0xffffffffffffffff virtual false final false
 void Cancel() ;

/// @brief Method Fail addr 0x0 size 0xffffffffffffffff virtual false final false
 void Fail(System::Exception ex) ;

/// @brief Method Compute addr 0x0 size 0xffffffffffffffff virtual true final false
 T Compute() ;

/// @brief Method Finally addr 0x0 size 0xffffffffffffffff virtual true final false
 void Finally() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::AsyncComputeOperation_1, "", "AsyncComputeOperation`1");
