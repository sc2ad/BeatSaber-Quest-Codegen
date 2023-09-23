#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class AsyncTaskCache;
}
// Type: System.Runtime.CompilerServices::AsyncTaskCache
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3395))
// CS Name: System.Runtime.CompilerServices.AsyncTaskCache
class CORDL_TYPE AsyncTaskCache : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AsyncTaskCache() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncTaskCache", modifiers: " const&", def_value: None }]
constexpr AsyncTaskCache(AsyncTaskCache const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncTaskCache", modifiers: "&&", def_value: None }]
constexpr AsyncTaskCache(AsyncTaskCache&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncTaskCache(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AsyncTaskCache& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncTaskCache& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncTaskCache& operator=(AsyncTaskCache&& o) noexcept = default;
  constexpr AsyncTaskCache& operator=(AsyncTaskCache const& o) noexcept = default;
                


// Fields

static System::Threading::Tasks::Task_1<bool> __declspec(property(get=__get_TrueTask, put=__set_TrueTask))  TrueTask;

static void __set_TrueTask(System::Threading::Tasks::Task_1<bool> value) ;

static System::Threading::Tasks::Task_1<bool> __get_TrueTask() ;

static System::Threading::Tasks::Task_1<bool> __declspec(property(get=__get_FalseTask, put=__set_FalseTask))  FalseTask;

static void __set_FalseTask(System::Threading::Tasks::Task_1<bool> value) ;

static System::Threading::Tasks::Task_1<bool> __get_FalseTask() ;

static ::ArrayW<System::Threading::Tasks::Task_1<int32_t>> __declspec(property(get=__get_Int32Tasks, put=__set_Int32Tasks))  Int32Tasks;

static void __set_Int32Tasks(::ArrayW<System::Threading::Tasks::Task_1<int32_t>> value) ;

static ::ArrayW<System::Threading::Tasks::Task_1<int32_t>> __get_Int32Tasks() ;


// Methods

/// @brief Method CreateInt32Tasks addr 0x236f970 size 0x108 virtual false final false
static ::ArrayW<System::Threading::Tasks::Task_1<int32_t>> CreateInt32Tasks() ;

/// @brief Method CreateCacheableTask addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TResult>
static System::Threading::Tasks::Task_1<TResult> CreateCacheableTask(TResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::AsyncTaskCache);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::AsyncTaskCache, "System.Runtime.CompilerServices", "AsyncTaskCache");
