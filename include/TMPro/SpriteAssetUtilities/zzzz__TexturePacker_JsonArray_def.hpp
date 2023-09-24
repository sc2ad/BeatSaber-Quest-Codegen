#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro::SpriteAssetUtilities {
struct TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Meta;
}
namespace TMPro::SpriteAssetUtilities {
class TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteDataObject;
}
namespace TMPro::SpriteAssetUtilities {
struct TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize;
}
namespace TMPro::SpriteAssetUtilities {
struct TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame;
}
namespace TMPro::SpriteAssetUtilities {
struct TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Frame;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace TMPro::SpriteAssetUtilities {
class TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteDataObject;
}
namespace TMPro::SpriteAssetUtilities {
class TexturePacker_JsonArray;
}
namespace TMPro::SpriteAssetUtilities {
struct TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Frame;
}
namespace TMPro::SpriteAssetUtilities {
struct TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Meta;
}
namespace TMPro::SpriteAssetUtilities {
struct TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame;
}
namespace TMPro::SpriteAssetUtilities {
struct TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize;
}
// Type: ::SpriteFrame
namespace TMPro::SpriteAssetUtilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12403))
// CS Name: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray::SpriteFrame
struct CORDL_TYPE TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "h", ty: "float_t", modifiers: "", def_value: None }]
constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame(float_t x, float_t y, float_t w, float_t h) noexcept;


                    constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame(TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame const&) = default;
                    constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame(TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame&&) = default;
                    constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame& operator=(TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame& operator=(TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(float_t value) ;

constexpr float_t __get_x() const;

 float_t __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(float_t value) ;

constexpr float_t __get_y() const;

 float_t __declspec(property(get=__get_w, put=__set_w))  w;

constexpr void __set_w(float_t value) ;

constexpr float_t __get_w() const;

 float_t __declspec(property(get=__get_h, put=__set_h))  h;

constexpr void __set_h(float_t value) ;

constexpr float_t __get_h() const;


// Methods

/// @brief Method ToString addr 0x2ab5cd0 size 0x278 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro::SpriteAssetUtilities
// Type: ::SpriteSize
namespace TMPro::SpriteAssetUtilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12404))
// CS Name: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray::SpriteSize
struct CORDL_TYPE TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "h", ty: "float_t", modifiers: "", def_value: None }]
constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize(float_t w, float_t h) noexcept;


                    constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize(TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize const&) = default;
                    constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize(TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize&&) = default;
                    constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize& operator=(TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize& operator=(TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_w, put=__set_w))  w;

constexpr void __set_w(float_t value) ;

constexpr float_t __get_w() const;

 float_t __declspec(property(get=__get_h, put=__set_h))  h;

constexpr void __set_h(float_t value) ;

constexpr float_t __get_h() const;


// Methods

/// @brief Method ToString addr 0x2ab5f48 size 0xac virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro::SpriteAssetUtilities
// Type: ::Frame
namespace TMPro::SpriteAssetUtilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12405))
// CS Name: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray::Frame
struct CORDL_TYPE TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Frame : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "filename", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "frame", ty: "TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame", modifiers: "", def_value: None }, CppParam { name: "rotated", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "trimmed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "spriteSourceSize", ty: "TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame", modifiers: "", def_value: None }, CppParam { name: "sourceSize", ty: "TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize", modifiers: "", def_value: None }, CppParam { name: "pivot", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Frame(::StringW filename, TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame frame, bool rotated, bool trimmed, TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame spriteSourceSize, TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize sourceSize, UnityEngine::Vector2 pivot) noexcept;


                    constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Frame(TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Frame const&) = default;
                    constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Frame(TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Frame&&) = default;
                    constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Frame& operator=(TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Frame const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Frame& operator=(TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Frame&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Frame(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_filename, put=__set_filename))  filename;

constexpr void __set_filename(::StringW value) ;

constexpr ::StringW __get_filename() const;

 TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame __declspec(property(get=__get_frame, put=__set_frame))  frame;

constexpr void __set_frame(TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame value) ;

constexpr TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame __get_frame() const;

 bool __declspec(property(get=__get_rotated, put=__set_rotated))  rotated;

constexpr void __set_rotated(bool value) ;

constexpr bool __get_rotated() const;

 bool __declspec(property(get=__get_trimmed, put=__set_trimmed))  trimmed;

constexpr void __set_trimmed(bool value) ;

constexpr bool __get_trimmed() const;

 TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame __declspec(property(get=__get_spriteSourceSize, put=__set_spriteSourceSize))  spriteSourceSize;

constexpr void __set_spriteSourceSize(TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame value) ;

constexpr TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame __get_spriteSourceSize() const;

 TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize __declspec(property(get=__get_sourceSize, put=__set_sourceSize))  sourceSize;

constexpr void __set_sourceSize(TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize value) ;

constexpr TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize __get_sourceSize() const;

 UnityEngine::Vector2 __declspec(property(get=__get_pivot, put=__set_pivot))  pivot;

constexpr void __set_pivot(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_pivot() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro::SpriteAssetUtilities
// Type: ::Meta
namespace TMPro::SpriteAssetUtilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12406))
// CS Name: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray::Meta
struct CORDL_TYPE TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Meta : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "app", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "image", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "format", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "size", ty: "TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "smartupdate", ty: "::StringW", modifiers: "", def_value: None }]
constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Meta(::StringW app, ::StringW version, ::StringW image, ::StringW format, TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize size, float_t scale, ::StringW smartupdate) noexcept;


                    constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Meta(TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Meta const&) = default;
                    constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Meta(TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Meta&&) = default;
                    constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Meta& operator=(TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Meta const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Meta& operator=(TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Meta&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Meta(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_app, put=__set_app))  app;

constexpr void __set_app(::StringW value) ;

constexpr ::StringW __get_app() const;

 ::StringW __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::StringW value) ;

constexpr ::StringW __get_version() const;

 ::StringW __declspec(property(get=__get_image, put=__set_image))  image;

constexpr void __set_image(::StringW value) ;

constexpr ::StringW __get_image() const;

 ::StringW __declspec(property(get=__get_format, put=__set_format))  format;

constexpr void __set_format(::StringW value) ;

constexpr ::StringW __get_format() const;

 TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize __declspec(property(get=__get_size, put=__set_size))  size;

constexpr void __set_size(TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize value) ;

constexpr TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize __get_size() const;

 float_t __declspec(property(get=__get_scale, put=__set_scale))  scale;

constexpr void __set_scale(float_t value) ;

constexpr float_t __get_scale() const;

 ::StringW __declspec(property(get=__get_smartupdate, put=__set_smartupdate))  smartupdate;

constexpr void __set_smartupdate(::StringW value) ;

constexpr ::StringW __get_smartupdate() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro::SpriteAssetUtilities
// Type: ::SpriteDataObject
namespace TMPro::SpriteAssetUtilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12407))
// CS Name: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray::SpriteDataObject
class CORDL_TYPE TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteDataObject : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteDataObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteDataObject", modifiers: " const&", def_value: None }]
constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteDataObject(TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteDataObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteDataObject", modifiers: "&&", def_value: None }]
constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteDataObject(TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteDataObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteDataObject(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteDataObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteDataObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteDataObject& operator=(TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteDataObject&& o) noexcept = default;
  constexpr TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteDataObject& operator=(TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteDataObject const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Frame> __declspec(property(get=__get_frames, put=__set_frames))  frames;

constexpr void __set_frames(System::Collections::Generic::List_1<TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Frame> value) ;

constexpr System::Collections::Generic::List_1<TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Frame> __get_frames() const;

 TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Meta __declspec(property(get=__get_meta, put=__set_meta))  meta;

constexpr void __set_meta(TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Meta value) ;

constexpr TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Meta __get_meta() const;


// Methods

static TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteDataObject New_ctor() ;

/// @brief Method .ctor addr 0x2ab5ff4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro::SpriteAssetUtilities
// Type: TMPro.SpriteAssetUtilities::TexturePacker_JsonArray
namespace TMPro::SpriteAssetUtilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12408))
// CS Name: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray
class CORDL_TYPE TexturePacker_JsonArray : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SpriteDataObject = TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteDataObject;

using Meta = TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Meta;

using Frame = TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Frame;

using SpriteSize = TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize;

using SpriteFrame = TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TexturePacker_JsonArray() = default;

// Ctor Parameters [CppParam { name: "", ty: "TexturePacker_JsonArray", modifiers: " const&", def_value: None }]
constexpr TexturePacker_JsonArray(TexturePacker_JsonArray const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TexturePacker_JsonArray", modifiers: "&&", def_value: None }]
constexpr TexturePacker_JsonArray(TexturePacker_JsonArray&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TexturePacker_JsonArray(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TexturePacker_JsonArray& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TexturePacker_JsonArray& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TexturePacker_JsonArray& operator=(TexturePacker_JsonArray&& o) noexcept = default;
  constexpr TexturePacker_JsonArray& operator=(TexturePacker_JsonArray const& o) noexcept = default;
                


// Methods

static TMPro::SpriteAssetUtilities::TexturePacker_JsonArray New_ctor() ;

/// @brief Method .ctor addr 0x2ab5cc8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro::SpriteAssetUtilities
NEED_NO_BOX(TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteDataObject);
DEFINE_IL2CPP_ARG_TYPE(TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteDataObject, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/SpriteDataObject");
NEED_NO_BOX(TMPro::SpriteAssetUtilities::TexturePacker_JsonArray);
DEFINE_IL2CPP_ARG_TYPE(TMPro::SpriteAssetUtilities::TexturePacker_JsonArray, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray");
DEFINE_IL2CPP_ARG_TYPE(TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Frame, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/Frame");
DEFINE_IL2CPP_ARG_TYPE(TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__Meta, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/Meta");
DEFINE_IL2CPP_ARG_TYPE(TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteFrame, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/SpriteFrame");
DEFINE_IL2CPP_ARG_TYPE(TMPro::SpriteAssetUtilities::TMPro__SpriteAssetUtilities__TexturePacker_JsonArray__SpriteSize, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/SpriteSize");
