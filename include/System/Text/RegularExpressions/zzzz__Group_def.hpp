#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Text/RegularExpressions/zzzz__Capture_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text::RegularExpressions {
class CaptureCollection;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class Group;
}
// Type: System.Text.RegularExpressions::Group
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7751))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7754))
// CS Name: System.Text.RegularExpressions.Group
class CORDL_TYPE Group : public System::Text::RegularExpressions::Capture {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Group() = default;

// Ctor Parameters [CppParam { name: "", ty: "Group", modifiers: " const&", def_value: None }]
constexpr Group(Group const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Group", modifiers: "&&", def_value: None }]
constexpr Group(Group&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Group(void* ptr) noexcept : System::Text::RegularExpressions::Capture(ptr) {
}


  constexpr Group& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Group& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Group& operator=(Group&& o) noexcept = default;
  constexpr Group& operator=(Group const& o) noexcept = default;
                


// Fields

static System::Text::RegularExpressions::Group __declspec(property(get=__get_s_emptyGroup, put=__set_s_emptyGroup))  s_emptyGroup;

static void __set_s_emptyGroup(System::Text::RegularExpressions::Group value) ;

static System::Text::RegularExpressions::Group __get_s_emptyGroup() ;

 ::ArrayW<int32_t> __declspec(property(get=__get__caps, put=__set__caps))  _caps;

constexpr void __set__caps(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__caps() const;

 int32_t __declspec(property(get=__get__capcount, put=__set__capcount))  _capcount;

constexpr void __set__capcount(int32_t value) ;

constexpr int32_t __get__capcount() const;

 System::Text::RegularExpressions::CaptureCollection __declspec(property(get=__get__capcoll, put=__set__capcoll))  _capcoll;

constexpr void __set__capcoll(System::Text::RegularExpressions::CaptureCollection value) ;

constexpr System::Text::RegularExpressions::CaptureCollection __get__capcoll() const;

 ::StringW __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField))  _Name_k__BackingField;

constexpr void __set__Name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Name_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_Success))  Success;


// Methods

static System::Text::RegularExpressions::Group New_ctor(::StringW text, ::ArrayW<int32_t> caps, int32_t capcount, ::StringW name) ;

/// @brief Method .ctor addr 0x27bcacc size 0x9c virtual false final false
 void _ctor(::StringW text, ::ArrayW<int32_t> caps, int32_t capcount, ::StringW name) ;

/// @brief Method get_Success addr 0x27bcb68 size 0x10 virtual false final false
 bool get_Success() ;

static System::Text::RegularExpressions::Group New_ctor() ;

/// @brief Method .ctor addr 0x27bcc74 size 0x38 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
NEED_NO_BOX(System::Text::RegularExpressions::Group);
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::Group, "System.Text.RegularExpressions", "Group");
