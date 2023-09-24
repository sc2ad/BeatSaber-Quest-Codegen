#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class SpriteCharacter;
}
// Type: UnityEngine.TextCore.Text::SpriteCharacter
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13519))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13538))
// CS Name: UnityEngine.TextCore.Text.SpriteCharacter
class CORDL_TYPE SpriteCharacter : public UnityEngine::TextCore::Text::TextElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~SpriteCharacter() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpriteCharacter", modifiers: " const&", def_value: None }]
constexpr SpriteCharacter(SpriteCharacter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpriteCharacter", modifiers: "&&", def_value: None }]
constexpr SpriteCharacter(SpriteCharacter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpriteCharacter(void* ptr) noexcept : UnityEngine::TextCore::Text::TextElement(ptr) {
}


  constexpr SpriteCharacter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpriteCharacter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpriteCharacter& operator=(SpriteCharacter&& o) noexcept = default;
  constexpr SpriteCharacter& operator=(SpriteCharacter const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_Name, put=__set_m_Name))  m_Name;

constexpr void __set_m_Name(::StringW value) ;

constexpr ::StringW __get_m_Name() const;

 int32_t __declspec(property(get=__get_m_HashCode, put=__set_m_HashCode))  m_HashCode;

constexpr void __set_m_HashCode(int32_t value) ;

constexpr int32_t __get_m_HashCode() const;


// Properties

 ::StringW __declspec(property(get=get_name))  name;


// Methods

/// @brief Method get_name addr 0x2bd2638 size 0x8 virtual false final false
 ::StringW get_name() ;

static UnityEngine::TextCore::Text::SpriteCharacter New_ctor() ;

/// @brief Method .ctor addr 0x2bd2640 size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(UnityEngine::TextCore::Text::SpriteCharacter);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::SpriteCharacter, "UnityEngine.TextCore.Text", "SpriteCharacter");
