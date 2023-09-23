#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IComparable;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class SemVer;
}
// Type: UnityEngine.ProBuilder::SemVer
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12136))
// CS Name: UnityEngine.ProBuilder.SemVer
class CORDL_TYPE SemVer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::ProBuilder::SemVer>
constexpr operator  System::IEquatable_1<UnityEngine::ProBuilder::SemVer>() const noexcept;

/// @brief Convert operator to System::IComparable_1<UnityEngine::ProBuilder::SemVer>
constexpr operator  System::IComparable_1<UnityEngine::ProBuilder::SemVer>() const noexcept;

/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SemVer() = default;

// Ctor Parameters [CppParam { name: "", ty: "SemVer", modifiers: " const&", def_value: None }]
constexpr SemVer(SemVer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SemVer", modifiers: "&&", def_value: None }]
constexpr SemVer(SemVer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SemVer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SemVer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SemVer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SemVer& operator=(SemVer&& o) noexcept = default;
  constexpr SemVer& operator=(SemVer const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_Major, put=__set_m_Major))  m_Major;

constexpr void __set_m_Major(int32_t value) ;

constexpr int32_t __get_m_Major() const;

 int32_t __declspec(property(get=__get_m_Minor, put=__set_m_Minor))  m_Minor;

constexpr void __set_m_Minor(int32_t value) ;

constexpr int32_t __get_m_Minor() const;

 int32_t __declspec(property(get=__get_m_Patch, put=__set_m_Patch))  m_Patch;

constexpr void __set_m_Patch(int32_t value) ;

constexpr int32_t __get_m_Patch() const;

 int32_t __declspec(property(get=__get_m_Build, put=__set_m_Build))  m_Build;

constexpr void __set_m_Build(int32_t value) ;

constexpr int32_t __get_m_Build() const;

 ::StringW __declspec(property(get=__get_m_Type, put=__set_m_Type))  m_Type;

constexpr void __set_m_Type(::StringW value) ;

constexpr ::StringW __get_m_Type() const;

 ::StringW __declspec(property(get=__get_m_Metadata, put=__set_m_Metadata))  m_Metadata;

constexpr void __set_m_Metadata(::StringW value) ;

constexpr ::StringW __get_m_Metadata() const;

 ::StringW __declspec(property(get=__get_m_Date, put=__set_m_Date))  m_Date;

constexpr void __set_m_Date(::StringW value) ;

constexpr ::StringW __get_m_Date() const;

/// @brief Field DefaultStringFormat offset 0
static constexpr ::ConstString  DefaultStringFormat{u"M.m.p-t.b"};


// Properties

 int32_t __declspec(property(get=get_major))  major;

 int32_t __declspec(property(get=get_minor))  minor;

 int32_t __declspec(property(get=get_patch))  patch;

 int32_t __declspec(property(get=get_build))  build;

 ::StringW __declspec(property(get=get_type))  type;

 ::StringW __declspec(property(get=get_metadata))  metadata;

 ::StringW __declspec(property(get=get_date))  date;

 UnityEngine::ProBuilder::SemVer __declspec(property(get=get_MajorMinorPatch))  MajorMinorPatch;


// Methods

/// @brief Method get_major addr 0x29d7ae4 size 0x8 virtual false final false
 int32_t get_major() ;

/// @brief Method get_minor addr 0x29d7aec size 0x8 virtual false final false
 int32_t get_minor() ;

/// @brief Method get_patch addr 0x29d7af4 size 0x8 virtual false final false
 int32_t get_patch() ;

/// @brief Method get_build addr 0x29d7afc size 0x8 virtual false final false
 int32_t get_build() ;

/// @brief Method get_type addr 0x29d7b04 size 0x50 virtual false final false
 ::StringW get_type() ;

/// @brief Method get_metadata addr 0x29d7b54 size 0x50 virtual false final false
 ::StringW get_metadata() ;

/// @brief Method get_date addr 0x29d7ba4 size 0x50 virtual false final false
 ::StringW get_date() ;

/// @brief Method get_MajorMinorPatch addr 0x29d7bf4 size 0x8c virtual false final false
 UnityEngine::ProBuilder::SemVer get_MajorMinorPatch() ;

// Ctor Parameters []
explicit SemVer() ;

/// @brief Method .ctor addr 0x29d7cec size 0x34 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "formatted", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "date", ty: "::StringW", modifiers: "", def_value: None }]
explicit SemVer(::StringW formatted, ::StringW date) ;

/// @brief Method .ctor addr 0x29d7d20 size 0xa8 virtual false final false
 void _ctor(::StringW formatted, ::StringW date) ;

// Ctor Parameters [CppParam { name: "major", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minor", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "patch", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "build", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "date", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "metadata", ty: "::StringW", modifiers: "", def_value: None }]
explicit SemVer(int32_t major, int32_t minor, int32_t patch, int32_t build, ::StringW type, ::StringW date, ::StringW metadata) ;

/// @brief Method .ctor addr 0x29d7c80 size 0x6c virtual false final false
 void _ctor(int32_t major, int32_t minor, int32_t patch, int32_t build, ::StringW type, ::StringW date, ::StringW metadata) ;

/// @brief Method IsValid addr 0x29d81ac size 0x30 virtual false final false
 bool IsValid() ;

/// @brief Method Equals addr 0x29d81dc size 0x70 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method GetHashCode addr 0x29d8450 size 0x1cc virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x29d824c size 0x204 virtual true final true
 bool Equals(UnityEngine::ProBuilder::SemVer version) ;

/// @brief Method CompareTo addr 0x29d861c size 0x64 virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method WrapNoValue addr 0x29d882c size 0x10 virtual false final false
static int32_t WrapNoValue(int32_t value) ;

/// @brief Method CompareTo addr 0x29d8680 size 0x1ac virtual true final true
 int32_t CompareTo(UnityEngine::ProBuilder::SemVer version) ;

/// @brief Method op_Equality addr 0x29d883c size 0x14 virtual false final false
static bool op_Equality(UnityEngine::ProBuilder::SemVer left, UnityEngine::ProBuilder::SemVer right) ;

/// @brief Method op_Inequality addr 0x29d8850 size 0x28 virtual false final false
static bool op_Inequality(UnityEngine::ProBuilder::SemVer left, UnityEngine::ProBuilder::SemVer right) ;

/// @brief Method op_LessThan addr 0x29d8878 size 0x24 virtual false final false
static bool op_LessThan(UnityEngine::ProBuilder::SemVer left, UnityEngine::ProBuilder::SemVer right) ;

/// @brief Method op_GreaterThan addr 0x29d889c size 0x1c virtual false final false
static bool op_GreaterThan(UnityEngine::ProBuilder::SemVer left, UnityEngine::ProBuilder::SemVer right) ;

/// @brief Method op_LessThanOrEqual addr 0x29d88b8 size 0x40 virtual false final false
static bool op_LessThanOrEqual(UnityEngine::ProBuilder::SemVer left, UnityEngine::ProBuilder::SemVer right) ;

/// @brief Method op_GreaterThanOrEqual addr 0x29d88f8 size 0x54 virtual false final false
static bool op_GreaterThanOrEqual(UnityEngine::ProBuilder::SemVer left, UnityEngine::ProBuilder::SemVer right) ;

/// @brief Method ToString addr 0x29d894c size 0x210 virtual false final false
 ::StringW ToString(::StringW format) ;

/// @brief Method ToString addr 0x29d8b5c size 0x230 virtual true final false
 ::StringW ToString() ;

/// @brief Method TryGetVersionInfo addr 0x29d7dc8 size 0x3e4 virtual false final false
static bool TryGetVersionInfo(::StringW input, ByRef<UnityEngine::ProBuilder::SemVer> version) ;

/// @brief Method GetBuildNumber addr 0x29d8d8c size 0xc8 virtual false final false
static int32_t GetBuildNumber(::StringW input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::SemVer);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SemVer, "UnityEngine.ProBuilder", "SemVer");
