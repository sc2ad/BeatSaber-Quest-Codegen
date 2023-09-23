#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class DiagnosticReport;
}
// Type: UnityEngine.XR.OpenXR::DiagnosticReport
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14163))
// CS Name: UnityEngine.XR.OpenXR.DiagnosticReport
class CORDL_TYPE DiagnosticReport : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DiagnosticReport() = default;

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticReport", modifiers: " const&", def_value: None }]
constexpr DiagnosticReport(DiagnosticReport const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticReport", modifiers: "&&", def_value: None }]
constexpr DiagnosticReport(DiagnosticReport&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DiagnosticReport(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DiagnosticReport& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DiagnosticReport& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DiagnosticReport& operator=(DiagnosticReport&& o) noexcept = default;
  constexpr DiagnosticReport& operator=(DiagnosticReport const& o) noexcept = default;
                


// Fields

/// @brief Field LibraryName offset 0
static constexpr ::ConstString  LibraryName{u"UnityOpenXR"};

static uint64_t __declspec(property(get=__get_k_NullSection, put=__set_k_NullSection))  k_NullSection;

static void __set_k_NullSection(uint64_t value) ;

static uint64_t __get_k_NullSection() ;


// Methods

/// @brief Method StartReport addr 0x2ae5224 size 0x64 virtual false final false
static void StartReport() ;

/// @brief Method GetSection addr 0x2ae5288 size 0x8c virtual false final false
static uint64_t GetSection(::StringW sectionName) ;

/// @brief Method AddSectionEntry addr 0x2ae5314 size 0xb4 virtual false final false
static void AddSectionEntry(uint64_t sectionHandle, ::StringW sectionEntry, ::StringW sectionBody) ;

/// @brief Method AddSectionBreak addr 0x2ae53c8 size 0x74 virtual false final false
static void AddSectionBreak(uint64_t sectionHandle) ;

/// @brief Method AddEventEntry addr 0x2ae543c size 0xa4 virtual false final false
static void AddEventEntry(::StringW eventName, ::StringW eventData) ;

/// @brief Method Internal_DumpReport addr 0x2ae54e0 size 0x64 virtual false final false
static void Internal_DumpReport() ;

/// @brief Method Internal_DumpReport addr 0x2ae5544 size 0x8c virtual false final false
static void Internal_DumpReport(::StringW reason) ;

/// @brief Method Internal_GenerateReport addr 0x2ae55d0 size 0x68 virtual false final false
static ::cordl_internals::intptr_t Internal_GenerateReport() ;

/// @brief Method Internal_ReleaseReport addr 0x2ae5638 size 0x7c virtual false final false
static void Internal_ReleaseReport(::cordl_internals::intptr_t report) ;

/// @brief Method GenerateReport addr 0x2ae56b4 size 0xb4 virtual false final false
static ::StringW GenerateReport() ;

/// @brief Method DumpReport addr 0x2ae5768 size 0x4 virtual false final false
static void DumpReport(::StringW reason) ;

// Ctor Parameters []
explicit DiagnosticReport() ;

/// @brief Method .ctor addr 0x2ae576c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR
NEED_NO_BOX(UnityEngine::XR::OpenXR::DiagnosticReport);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::DiagnosticReport, "UnityEngine.XR.OpenXR", "DiagnosticReport");
