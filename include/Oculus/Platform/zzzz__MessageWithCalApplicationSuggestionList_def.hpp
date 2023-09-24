#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__CalApplicationSuggestionList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class CalApplicationSuggestionList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithCalApplicationSuggestionList;
}
// Type: Oculus.Platform::MessageWithCalApplicationSuggestionList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4437 }), TypeDefinitionIndex(TypeDefinitionIndex(13400))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13224))
// CS Name: Oculus.Platform.MessageWithCalApplicationSuggestionList
class CORDL_TYPE MessageWithCalApplicationSuggestionList : public Oculus::Platform::Message_1<Oculus::Platform::Models::CalApplicationSuggestionList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithCalApplicationSuggestionList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithCalApplicationSuggestionList", modifiers: " const&", def_value: None }]
constexpr MessageWithCalApplicationSuggestionList(MessageWithCalApplicationSuggestionList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithCalApplicationSuggestionList", modifiers: "&&", def_value: None }]
constexpr MessageWithCalApplicationSuggestionList(MessageWithCalApplicationSuggestionList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithCalApplicationSuggestionList(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::CalApplicationSuggestionList>(ptr) {
}


  constexpr MessageWithCalApplicationSuggestionList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithCalApplicationSuggestionList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithCalApplicationSuggestionList& operator=(MessageWithCalApplicationSuggestionList&& o) noexcept = default;
  constexpr MessageWithCalApplicationSuggestionList& operator=(MessageWithCalApplicationSuggestionList const& o) noexcept = default;
                


// Methods

static Oculus::Platform::MessageWithCalApplicationSuggestionList New_ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x25808d8 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetCalApplicationSuggestionList addr 0x2580930 size 0x3c virtual true final false
 Oculus::Platform::Models::CalApplicationSuggestionList GetCalApplicationSuggestionList() ;

/// @brief Method GetDataFromMessage addr 0x258096c size 0x9c virtual true final false
 Oculus::Platform::Models::CalApplicationSuggestionList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithCalApplicationSuggestionList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithCalApplicationSuggestionList, "Oculus.Platform", "MessageWithCalApplicationSuggestionList");
