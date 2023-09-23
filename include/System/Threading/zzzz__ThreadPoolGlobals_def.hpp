#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Threading {
class ThreadPoolWorkQueue;
}
// Forward declare root types
namespace System::Threading {
class ThreadPoolGlobals;
}
// Type: System.Threading::ThreadPoolGlobals
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2729))
// CS Name: System.Threading.ThreadPoolGlobals
class CORDL_TYPE ThreadPoolGlobals : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ThreadPoolGlobals() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadPoolGlobals", modifiers: " const&", def_value: None }]
constexpr ThreadPoolGlobals(ThreadPoolGlobals const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadPoolGlobals", modifiers: "&&", def_value: None }]
constexpr ThreadPoolGlobals(ThreadPoolGlobals&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThreadPoolGlobals(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ThreadPoolGlobals& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThreadPoolGlobals& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThreadPoolGlobals& operator=(ThreadPoolGlobals&& o) noexcept = default;
  constexpr ThreadPoolGlobals& operator=(ThreadPoolGlobals const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_processorCount, put=__set_processorCount))  processorCount;

static void __set_processorCount(int32_t value) ;

static int32_t __get_processorCount() ;

static bool __declspec(property(get=__get_vmTpInitialized, put=__set_vmTpInitialized))  vmTpInitialized;

static void __set_vmTpInitialized(bool value) ;

static bool __get_vmTpInitialized() ;

static bool __declspec(property(get=__get_enableWorkerTracking, put=__set_enableWorkerTracking))  enableWorkerTracking;

static void __set_enableWorkerTracking(bool value) ;

static bool __get_enableWorkerTracking() ;

static System::Threading::ThreadPoolWorkQueue __declspec(property(get=__get_workQueue, put=__set_workQueue))  workQueue;

static void __set_workQueue(System::Threading::ThreadPoolWorkQueue value) ;

static System::Threading::ThreadPoolWorkQueue __get_workQueue() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::ThreadPoolGlobals);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadPoolGlobals, "System.Threading", "ThreadPoolGlobals");
