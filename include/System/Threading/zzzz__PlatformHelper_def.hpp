#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Threading {
class PlatformHelper;
}
// Type: System.Threading::PlatformHelper
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2680))
// CS Name: System.Threading.PlatformHelper
class CORDL_TYPE PlatformHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PlatformHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformHelper", modifiers: " const&", def_value: None }]
constexpr PlatformHelper(PlatformHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformHelper", modifiers: "&&", def_value: None }]
constexpr PlatformHelper(PlatformHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlatformHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlatformHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlatformHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlatformHelper& operator=(PlatformHelper&& o) noexcept = default;
  constexpr PlatformHelper& operator=(PlatformHelper const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_s_processorCount, put=__set_s_processorCount))  s_processorCount;

static void __set_s_processorCount(int32_t value) ;

static int32_t __get_s_processorCount() ;

static int32_t __declspec(property(get=__get_s_lastProcessorCountRefreshTicks, put=__set_s_lastProcessorCountRefreshTicks))  s_lastProcessorCountRefreshTicks;

static void __set_s_lastProcessorCountRefreshTicks(int32_t value) ;

static int32_t __get_s_lastProcessorCountRefreshTicks() ;

static bool __declspec(property(get=__get_IsSingleProcessor, put=__set_IsSingleProcessor))  IsSingleProcessor;

static void __set_IsSingleProcessor(bool value) ;

static bool __get_IsSingleProcessor() ;


// Properties

static int32_t __declspec(property(get=get_ProcessorCount))  ProcessorCount;


// Methods

/// @brief Method get_ProcessorCount addr 0x24a4e54 size 0xec virtual false final false
static int32_t get_ProcessorCount() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::PlatformHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::PlatformHelper, "System.Threading", "PlatformHelper");
