#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine::Profiling::Experimental {
struct DebugScreenCapture;
}
// Type: UnityEngine.Profiling.Experimental::DebugScreenCapture
namespace UnityEngine::Profiling::Experimental {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10236))
// CS Name: UnityEngine.Profiling.Experimental.DebugScreenCapture
struct CORDL_TYPE DebugScreenCapture : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_rawImageDataReference_k__BackingField", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "_imageFormat_k__BackingField", ty: "::UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "_width_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_height_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DebugScreenCapture(::Unity::Collections::NativeArray_1<uint8_t> _rawImageDataReference_k__BackingField, ::UnityEngine::TextureFormat _imageFormat_k__BackingField, int32_t _width_k__BackingField, int32_t _height_k__BackingField) noexcept;


                    constexpr DebugScreenCapture(DebugScreenCapture const&) = default;
                    constexpr DebugScreenCapture(DebugScreenCapture&&) = default;
                    constexpr DebugScreenCapture& operator=(DebugScreenCapture const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DebugScreenCapture& operator=(DebugScreenCapture&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DebugScreenCapture(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::Unity::Collections::NativeArray_1<uint8_t> __declspec(property(get=__get__rawImageDataReference_k__BackingField, put=__set__rawImageDataReference_k__BackingField))  _rawImageDataReference_k__BackingField;

constexpr void __set__rawImageDataReference_k__BackingField(::Unity::Collections::NativeArray_1<uint8_t> value) ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t> __get__rawImageDataReference_k__BackingField() const;

 ::UnityEngine::TextureFormat __declspec(property(get=__get__imageFormat_k__BackingField, put=__set__imageFormat_k__BackingField))  _imageFormat_k__BackingField;

constexpr void __set__imageFormat_k__BackingField(::UnityEngine::TextureFormat value) ;

constexpr ::UnityEngine::TextureFormat __get__imageFormat_k__BackingField() const;

 int32_t __declspec(property(get=__get__width_k__BackingField, put=__set__width_k__BackingField))  _width_k__BackingField;

constexpr void __set__width_k__BackingField(int32_t value) ;

constexpr int32_t __get__width_k__BackingField() const;

 int32_t __declspec(property(get=__get__height_k__BackingField, put=__set__height_k__BackingField))  _height_k__BackingField;

constexpr void __set__height_k__BackingField(int32_t value) ;

constexpr int32_t __get__height_k__BackingField() const;


// Properties

 ::Unity::Collections::NativeArray_1<uint8_t> __declspec(property(put=set_rawImageDataReference))  rawImageDataReference;

 ::UnityEngine::TextureFormat __declspec(property(put=set_imageFormat))  imageFormat;

 int32_t __declspec(property(put=set_width))  width;

 int32_t __declspec(property(put=set_height))  height;


// Methods

/// @brief Method set_rawImageDataReference addr 0x2b6eeac size 0x8 virtual false final false
 void set_rawImageDataReference(::Unity::Collections::NativeArray_1<uint8_t> value) ;

/// @brief Method set_imageFormat addr 0x2b6eeb4 size 0x8 virtual false final false
 void set_imageFormat(::UnityEngine::TextureFormat value) ;

/// @brief Method set_width addr 0x2b6eebc size 0x8 virtual false final false
 void set_width(int32_t value) ;

/// @brief Method set_height addr 0x2b6eec4 size 0x8 virtual false final false
 void set_height(int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Profiling::Experimental
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Profiling::Experimental::DebugScreenCapture, "UnityEngine.Profiling.Experimental", "DebugScreenCapture");
