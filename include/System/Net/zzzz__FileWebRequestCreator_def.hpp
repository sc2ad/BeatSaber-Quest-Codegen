#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Net {
class IWebRequestCreate;
}
namespace System {
class Uri;
}
namespace System::Net {
class WebRequest;
}
// Forward declare root types
namespace System::Net {
class FileWebRequestCreator;
}
// Type: System.Net::FileWebRequestCreator
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7986))
// CS Name: System.Net.FileWebRequestCreator
class CORDL_TYPE FileWebRequestCreator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Net::IWebRequestCreate
constexpr operator  ::System::Net::IWebRequestCreate() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FileWebRequestCreator() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileWebRequestCreator", modifiers: " const&", def_value: None }]
constexpr FileWebRequestCreator(FileWebRequestCreator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileWebRequestCreator", modifiers: "&&", def_value: None }]
constexpr FileWebRequestCreator(FileWebRequestCreator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileWebRequestCreator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FileWebRequestCreator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileWebRequestCreator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileWebRequestCreator& operator=(FileWebRequestCreator&& o) noexcept = default;
  constexpr FileWebRequestCreator& operator=(FileWebRequestCreator const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit FileWebRequestCreator() ;

/// @brief Method .ctor addr 0x2811ec4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Create addr 0x2824724 size 0x60 virtual true final true
 ::System::Net::WebRequest Create(::System::Uri uri) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::FileWebRequestCreator);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FileWebRequestCreator, "System.Net", "FileWebRequestCreator");
