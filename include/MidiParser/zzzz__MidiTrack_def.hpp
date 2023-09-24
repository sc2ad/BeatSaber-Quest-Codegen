#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace MidiParser {
struct MidiEvent;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace MidiParser {
class MidiTrack;
}
// Type: MidiParser::MidiTrack
namespace MidiParser {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16045))
// CS Name: MidiParser.MidiTrack
class CORDL_TYPE MidiTrack : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MidiTrack() = default;

// Ctor Parameters [CppParam { name: "", ty: "MidiTrack", modifiers: " const&", def_value: None }]
constexpr MidiTrack(MidiTrack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MidiTrack", modifiers: "&&", def_value: None }]
constexpr MidiTrack(MidiTrack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MidiTrack(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MidiTrack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MidiTrack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MidiTrack& operator=(MidiTrack&& o) noexcept = default;
  constexpr MidiTrack& operator=(MidiTrack const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_Index, put=__set_Index))  Index;

constexpr void __set_Index(int32_t value) ;

constexpr int32_t __get_Index() const;

 System::Collections::Generic::List_1<MidiParser::MidiEvent> __declspec(property(get=__get_MidiEvents, put=__set_MidiEvents))  MidiEvents;

constexpr void __set_MidiEvents(System::Collections::Generic::List_1<MidiParser::MidiEvent> value) ;

constexpr System::Collections::Generic::List_1<MidiParser::MidiEvent> __get_MidiEvents() const;


// Methods

static MidiParser::MidiTrack New_ctor() ;

/// @brief Method .ctor addr 0x2278d30 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def MidiParser
NEED_NO_BOX(MidiParser::MidiTrack);
DEFINE_IL2CPP_ARG_TYPE(MidiParser::MidiTrack, "MidiParser", "MidiTrack");
