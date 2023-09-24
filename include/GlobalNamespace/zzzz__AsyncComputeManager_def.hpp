#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections::Concurrent {
template<typename T>
class BlockingCollection_1;
}
namespace GlobalNamespace {
template<typename T>
class AsyncComputeOperation_1;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class IAsyncComputeManager;
}
namespace GlobalNamespace {
class AsyncComputeOperation;
}
namespace System::Threading {
class Thread;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class AsyncComputeManager;
}
// Type: ::AsyncComputeManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12620))
// CS Name: AsyncComputeManager
class CORDL_TYPE AsyncComputeManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IAsyncComputeManager
constexpr operator  GlobalNamespace::IAsyncComputeManager() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~AsyncComputeManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncComputeManager", modifiers: " const&", def_value: None }]
constexpr AsyncComputeManager(AsyncComputeManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncComputeManager", modifiers: "&&", def_value: None }]
constexpr AsyncComputeManager(AsyncComputeManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncComputeManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AsyncComputeManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncComputeManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncComputeManager& operator=(AsyncComputeManager&& o) noexcept = default;
  constexpr AsyncComputeManager& operator=(AsyncComputeManager const& o) noexcept = default;
                


// Fields

 System::Collections::Concurrent::BlockingCollection_1<GlobalNamespace::AsyncComputeOperation> __declspec(property(get=__get__asyncComputeRequests, put=__set__asyncComputeRequests))  _asyncComputeRequests;

constexpr void __set__asyncComputeRequests(System::Collections::Concurrent::BlockingCollection_1<GlobalNamespace::AsyncComputeOperation> value) ;

constexpr System::Collections::Concurrent::BlockingCollection_1<GlobalNamespace::AsyncComputeOperation> __get__asyncComputeRequests() const;

 System::Threading::Thread __declspec(property(get=__get__computeThread, put=__set__computeThread))  _computeThread;

constexpr void __set__computeThread(System::Threading::Thread value) ;

constexpr System::Threading::Thread __get__computeThread() const;

 bool __declspec(property(get=__get__disposed, put=__set__disposed))  _disposed;

constexpr void __set__disposed(bool value) ;

constexpr bool __get__disposed() const;


// Methods

static GlobalNamespace::AsyncComputeManager New_ctor() ;

/// @brief Method .ctor addr 0xd9c0d0 size 0x140 virtual false final false
 void _ctor() ;

/// @brief Method Dispose addr 0xd9c210 size 0x68 virtual true final true
 void Dispose() ;

/// @brief Method BeginOperation addr 0xd9c278 size 0x58 virtual true final true
 void BeginOperation(GlobalNamespace::AsyncComputeOperation operation) ;

/// @brief Method BeginOperation addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 System::Threading::Tasks::Task_1<T> BeginOperation(GlobalNamespace::AsyncComputeOperation_1<T> operation) ;

/// @brief Method ComputeThreadRun addr 0xd9c2d0 size 0x160 virtual false final false
 void ComputeThreadRun() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AsyncComputeManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AsyncComputeManager, "", "AsyncComputeManager");
