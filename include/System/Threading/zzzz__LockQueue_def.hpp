#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Threading {
class ReaderWriterLock;
}
// Forward declare root types
namespace System::Threading {
class LockQueue;
}
// Type: System.Threading::LockQueue
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2741))
// CS Name: System.Threading.LockQueue
class CORDL_TYPE LockQueue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LockQueue() = default;

// Ctor Parameters [CppParam { name: "", ty: "LockQueue", modifiers: " const&", def_value: None }]
constexpr LockQueue(LockQueue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LockQueue", modifiers: "&&", def_value: None }]
constexpr LockQueue(LockQueue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LockQueue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LockQueue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LockQueue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LockQueue& operator=(LockQueue&& o) noexcept = default;
  constexpr LockQueue& operator=(LockQueue const& o) noexcept = default;
                


// Fields

 System::Threading::ReaderWriterLock __declspec(property(get=__get_rwlock, put=__set_rwlock))  rwlock;

constexpr void __set_rwlock(System::Threading::ReaderWriterLock value) ;

constexpr System::Threading::ReaderWriterLock __get_rwlock() const;

 int32_t __declspec(property(get=__get_lockCount, put=__set_lockCount))  lockCount;

constexpr void __set_lockCount(int32_t value) ;

constexpr int32_t __get_lockCount() const;


// Properties

 bool __declspec(property(get=get_IsEmpty))  IsEmpty;


// Methods

static System::Threading::LockQueue New_ctor(System::Threading::ReaderWriterLock rwlock) ;

/// @brief Method .ctor addr 0x24b0a88 size 0x28 virtual false final false
 void _ctor(System::Threading::ReaderWriterLock rwlock) ;

/// @brief Method Wait addr 0x24b0ab0 size 0x1b4 virtual false final false
 bool Wait(int32_t timeout) ;

/// @brief Method get_IsEmpty addr 0x24b0c64 size 0xc0 virtual false final false
 bool get_IsEmpty() ;

/// @brief Method Pulse addr 0x24b0d24 size 0xb8 virtual false final false
 void Pulse() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::LockQueue);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::LockQueue, "System.Threading", "LockQueue");
