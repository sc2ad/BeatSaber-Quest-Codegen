#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Notepad {
struct NoteURL;
}
// Forward declare root types
namespace Notepad {
class NoteSO;
}
// Type: Notepad::NoteSO
namespace Notepad {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16093))
// CS Name: Notepad.NoteSO
class CORDL_TYPE NoteSO : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~NoteSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteSO", modifiers: " const&", def_value: None }]
constexpr NoteSO(NoteSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteSO", modifiers: "&&", def_value: None }]
constexpr NoteSO(NoteSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteSO(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr NoteSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteSO& operator=(NoteSO&& o) noexcept = default;
  constexpr NoteSO& operator=(NoteSO const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_title, put=__set_title))  title;

constexpr void __set_title(::StringW value) ;

constexpr ::StringW __get_title() const;

 ::StringW __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(::StringW value) ;

constexpr ::StringW __get_content() const;

 ::ArrayW<Notepad::NoteURL> __declspec(property(get=__get_urls, put=__set_urls))  urls;

constexpr void __set_urls(::ArrayW<Notepad::NoteURL> value) ;

constexpr ::ArrayW<Notepad::NoteURL> __get_urls() const;


// Methods

// Ctor Parameters []
explicit NoteSO() ;

/// @brief Method .ctor addr 0x2551ba8 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Notepad
NEED_NO_BOX(Notepad::NoteSO);
DEFINE_IL2CPP_ARG_TYPE(Notepad::NoteSO, "Notepad", "NoteSO");
