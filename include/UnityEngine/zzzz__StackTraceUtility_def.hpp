#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Diagnostics {
class StackTrace;
}
// Forward declare root types
namespace UnityEngine {
class StackTraceUtility;
}
// Type: UnityEngine::StackTraceUtility
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10152))
// CS Name: UnityEngine.StackTraceUtility
class CORDL_TYPE StackTraceUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StackTraceUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "StackTraceUtility", modifiers: " const&", def_value: None }]
constexpr StackTraceUtility(StackTraceUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StackTraceUtility", modifiers: "&&", def_value: None }]
constexpr StackTraceUtility(StackTraceUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StackTraceUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StackTraceUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StackTraceUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StackTraceUtility& operator=(StackTraceUtility&& o) noexcept = default;
  constexpr StackTraceUtility& operator=(StackTraceUtility const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_projectFolder, put=__set_projectFolder))  projectFolder;

static void __set_projectFolder(::StringW value) ;

static ::StringW __get_projectFolder() ;


// Methods

/// @brief Method SetProjectFolder addr 0x2b5a424 size 0xdc virtual false final false
static void SetProjectFolder(::StringW folder) ;

/// @brief Method ExtractStackTrace addr 0x2b5a500 size 0x164 virtual false final false
static ::StringW ExtractStackTrace() ;

/// @brief Method ExtractStringFromExceptionInternal addr 0x2b5ad0c size 0x368 virtual false final false
static void ExtractStringFromExceptionInternal(::bs_hook::Il2CppWrapperType exceptiono, ByRef<::StringW> message, ByRef<::StringW> stackTrace) ;

/// @brief Method ExtractFormattedStackTrace addr 0x2b5a664 size 0x6a8 virtual false final false
static ::StringW ExtractFormattedStackTrace(System::Diagnostics::StackTrace stackTrace) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::StackTraceUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::StackTraceUtility, "UnityEngine", "StackTraceUtility");
