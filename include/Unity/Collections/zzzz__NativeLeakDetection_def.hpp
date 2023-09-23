#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Unity::Collections {
class NativeLeakDetection;
}
// Type: Unity.Collections::NativeLeakDetection
namespace Unity::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9938))
// CS Name: Unity.Collections.NativeLeakDetection
class CORDL_TYPE NativeLeakDetection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeLeakDetection() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeLeakDetection", modifiers: " const&", def_value: None }]
constexpr NativeLeakDetection(NativeLeakDetection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeLeakDetection", modifiers: "&&", def_value: None }]
constexpr NativeLeakDetection(NativeLeakDetection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeLeakDetection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NativeLeakDetection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeLeakDetection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeLeakDetection& operator=(NativeLeakDetection&& o) noexcept = default;
  constexpr NativeLeakDetection& operator=(NativeLeakDetection const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_s_NativeLeakDetectionMode, put=__set_s_NativeLeakDetectionMode))  s_NativeLeakDetectionMode;

static void __set_s_NativeLeakDetectionMode(int32_t value) ;

static int32_t __get_s_NativeLeakDetectionMode() ;


// Methods

/// @brief Method Initialize addr 0x2b28464 size 0x4c virtual false final false
static void Initialize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections
NEED_NO_BOX(Unity::Collections::NativeLeakDetection);
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::NativeLeakDetection, "Unity.Collections", "NativeLeakDetection");
