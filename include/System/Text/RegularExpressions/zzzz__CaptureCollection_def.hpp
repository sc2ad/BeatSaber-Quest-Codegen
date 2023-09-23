#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Text::RegularExpressions {
class Group;
}
namespace System::Text::RegularExpressions {
class Capture;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class CaptureCollection;
}
// Type: System.Text.RegularExpressions::CaptureCollection
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7752))
// CS Name: System.Text.RegularExpressions.CaptureCollection
class CORDL_TYPE CaptureCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CaptureCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "CaptureCollection", modifiers: " const&", def_value: None }]
constexpr CaptureCollection(CaptureCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CaptureCollection", modifiers: "&&", def_value: None }]
constexpr CaptureCollection(CaptureCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CaptureCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CaptureCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CaptureCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CaptureCollection& operator=(CaptureCollection&& o) noexcept = default;
  constexpr CaptureCollection& operator=(CaptureCollection const& o) noexcept = default;
                


// Fields

 System::Text::RegularExpressions::Group __declspec(property(get=__get__group, put=__set__group))  _group;

constexpr void __set__group(System::Text::RegularExpressions::Group value) ;

constexpr System::Text::RegularExpressions::Group __get__group() const;

 int32_t __declspec(property(get=__get__capcount, put=__set__capcount))  _capcount;

constexpr void __set__capcount(int32_t value) ;

constexpr int32_t __get__capcount() const;

 ::ArrayW<System::Text::RegularExpressions::Capture> __declspec(property(get=__get__captures, put=__set__captures))  _captures;

constexpr void __set__captures(::ArrayW<System::Text::RegularExpressions::Capture> value) ;

constexpr ::ArrayW<System::Text::RegularExpressions::Capture> __get__captures() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
NEED_NO_BOX(System::Text::RegularExpressions::CaptureCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::CaptureCollection, "System.Text.RegularExpressions", "CaptureCollection");
