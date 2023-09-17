#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Type: ::IAudioTimeSource
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4050))
// CS Name: IAudioTimeSource
class CORDL_TYPE IAudioTimeSource : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAudioTimeSource() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAudioTimeSource(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 float_t __declspec(property(get=get_songTime))  songTime;

 float_t __declspec(property(get=get_lastFrameDeltaSongTime))  lastFrameDeltaSongTime;

 float_t __declspec(property(get=get_songEndTime))  songEndTime;

 float_t __declspec(property(get=get_songLength))  songLength;

 bool __declspec(property(get=get_isReady))  isReady;


// Methods

/// @brief Method get_songTime addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_songTime() ;

/// @brief Method get_lastFrameDeltaSongTime addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_lastFrameDeltaSongTime() ;

/// @brief Method get_songEndTime addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_songEndTime() ;

/// @brief Method get_songLength addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_songLength() ;

/// @brief Method get_isReady addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isReady() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IAudioTimeSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IAudioTimeSource, "", "IAudioTimeSource");
