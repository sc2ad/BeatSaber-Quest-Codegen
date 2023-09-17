#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentKeywords;
}
// Type: ::EnvironmentKeywords
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4203))
// CS Name: EnvironmentKeywords
class CORDL_TYPE EnvironmentKeywords : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EnvironmentKeywords() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentKeywords", modifiers: " const&", def_value: None }]
constexpr EnvironmentKeywords(EnvironmentKeywords const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentKeywords", modifiers: "&&", def_value: None }]
constexpr EnvironmentKeywords(EnvironmentKeywords&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvironmentKeywords(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnvironmentKeywords& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvironmentKeywords& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvironmentKeywords& operator=(EnvironmentKeywords&& o) noexcept = default;
  constexpr EnvironmentKeywords& operator=(EnvironmentKeywords const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::IReadOnlyList_1<::StringW> __declspec(property(get=__get__environmentKeywords, put=__set__environmentKeywords))  _environmentKeywords;

constexpr void __set__environmentKeywords(::System::Collections::Generic::IReadOnlyList_1<::StringW> value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW> __get__environmentKeywords() const;

 ::System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get__environmentKeywordsSet, put=__set__environmentKeywordsSet))  _environmentKeywordsSet;

constexpr void __set__environmentKeywordsSet(::System::Collections::Generic::HashSet_1<::StringW> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW> __get__environmentKeywordsSet() const;


// Properties

 ::System::Collections::Generic::IReadOnlyList_1<::StringW> __declspec(property(get=get_environmentKeywords))  environmentKeywords;


// Methods

/// @brief Method get_environmentKeywords addr 0x21bef18 size 0x8 virtual false final false
 ::System::Collections::Generic::IReadOnlyList_1<::StringW> get_environmentKeywords() ;

// Ctor Parameters [CppParam { name: "environmentKeywords", ty: "::System::Collections::Generic::IReadOnlyList_1<::StringW>", modifiers: "", def_value: None }]
explicit EnvironmentKeywords(::System::Collections::Generic::IReadOnlyList_1<::StringW> environmentKeywords) ;

/// @brief Method .ctor addr 0x21bef20 size 0x104 virtual false final false
 void _ctor(::System::Collections::Generic::IReadOnlyList_1<::StringW> environmentKeywords) ;

/// @brief Method HasKeyword addr 0x21bf024 size 0x58 virtual false final false
 bool HasKeyword(::StringW keyword) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentKeywords);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentKeywords, "", "EnvironmentKeywords");
