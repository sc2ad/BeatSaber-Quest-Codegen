#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Threading {
class ThreadPoolWorkQueue;
}
namespace System {
class Random;
}
namespace System::Threading {
class System__Threading__ThreadPoolWorkQueue__WorkStealingQueue;
}
// Forward declare root types
namespace System::Threading {
class ThreadPoolWorkQueueThreadLocals;
}
// Type: System.Threading::ThreadPoolWorkQueueThreadLocals
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2734))
// CS Name: System.Threading.ThreadPoolWorkQueueThreadLocals
class CORDL_TYPE ThreadPoolWorkQueueThreadLocals : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ThreadPoolWorkQueueThreadLocals() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadPoolWorkQueueThreadLocals", modifiers: " const&", def_value: None }]
constexpr ThreadPoolWorkQueueThreadLocals(ThreadPoolWorkQueueThreadLocals const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadPoolWorkQueueThreadLocals", modifiers: "&&", def_value: None }]
constexpr ThreadPoolWorkQueueThreadLocals(ThreadPoolWorkQueueThreadLocals&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThreadPoolWorkQueueThreadLocals(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ThreadPoolWorkQueueThreadLocals& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThreadPoolWorkQueueThreadLocals& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThreadPoolWorkQueueThreadLocals& operator=(ThreadPoolWorkQueueThreadLocals&& o) noexcept = default;
  constexpr ThreadPoolWorkQueueThreadLocals& operator=(ThreadPoolWorkQueueThreadLocals const& o) noexcept = default;
                


// Fields

static System::Threading::ThreadPoolWorkQueueThreadLocals __declspec(property(get=__get_threadLocals, put=__set_threadLocals))  threadLocals;

static void __set_threadLocals(System::Threading::ThreadPoolWorkQueueThreadLocals value) ;

static System::Threading::ThreadPoolWorkQueueThreadLocals __get_threadLocals() ;

 System::Threading::ThreadPoolWorkQueue __declspec(property(get=__get_workQueue, put=__set_workQueue))  workQueue;

constexpr void __set_workQueue(System::Threading::ThreadPoolWorkQueue value) ;

constexpr System::Threading::ThreadPoolWorkQueue __get_workQueue() const;

 System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue __declspec(property(get=__get_workStealingQueue, put=__set_workStealingQueue))  workStealingQueue;

constexpr void __set_workStealingQueue(System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue value) ;

constexpr System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue __get_workStealingQueue() const;

 System::Random __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(System::Random value) ;

constexpr System::Random __get_random() const;


// Methods

// Ctor Parameters [CppParam { name: "tpq", ty: "System::Threading::ThreadPoolWorkQueue", modifiers: "", def_value: None }]
explicit ThreadPoolWorkQueueThreadLocals(System::Threading::ThreadPoolWorkQueue tpq) ;

/// @brief Method .ctor addr 0x24aeaf4 size 0x11c virtual false final false
 void _ctor(System::Threading::ThreadPoolWorkQueue tpq) ;

/// @brief Method CleanUp addr 0x24aec10 size 0xd4 virtual false final false
 void CleanUp() ;

/// @brief Method Finalize addr 0x24aece4 size 0xcc virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::ThreadPoolWorkQueueThreadLocals);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadPoolWorkQueueThreadLocals, "System.Threading", "ThreadPoolWorkQueueThreadLocals");
